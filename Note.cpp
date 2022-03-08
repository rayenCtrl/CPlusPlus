#include "Note.h"
#include"Groupe.h"

Note::Note(Matiere mat,Etudiant etu,float nte,string tpe)
:Mat(mat),Etu(etu),note(nte),type(tpe)
{
    assert(note>=0.0 && note<=20.0);
}

Note::Note()
:Mat(),Etu(),note(0.0),type("")
{
}

void Note::Print()
{
    Mat.Print();
    Etu.Print();
    cout<<note<<" "<<type<<endl;
}

Matiere Note::getMat()
{
    return this->Mat;
}

Etudiant Note::getEtu()
{
    return this->Etu;
}

string Note::getTyp()
{
    return this->type;
}

float Note::getNote()
{
    return this->note;
}

void Add(vector<Note>&ListeN,vector<Groupe>&ListGr,Note x) 
{
    int flag=0;
    for (int i = 0; i <ListGr.size(); i++)
    {
        for (int j = 0; j < ListGr[i].ListeModules.size(); j++)
        {
            for (int k = 0; k < ListGr[i].ListeModules[j].ListeMat.size(); k++)
            {
                if (ListGr[i].ListeModules[j].ListeMat[k].getId()==x.getMat().getId())
                {
                    for (int m = 0; m < ListGr[i].ListeEtudiants.size(); m++)
                    {
                        if (ListGr[i].ListeEtudiants[m].getId()==x.getEtu().getId())
                        {
                            vector<Note>::iterator it;
                            it=ListeN.begin();
                            while((it<ListeN.end()))
                            {
                                it++;
                            }
                            flag=1;
                            ListeN.insert(it,x);  
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    if(flag != 1)
    {
        cout<<"La Mat ou Etu n'existe pas !"<<endl;
    }
}

void Del(vector<Note>&ListeN,Note x)
{
    for (int i = 0; i < ListeN.size(); i++)
    {
        if ((ListeN[i].getEtu().getId()==x.getEtu().getId()) 
        &&ListeN[i].getMat().getId()==x.getMat().getId() 
        && ListeN[i].getTyp()==x.getTyp()) 
        {
            ListeN.erase(ListeN.begin()+i);
        }        
    }   
}

float MoyMat(Etudiant e,Matiere m,vector<Note>ListeN)
{ 
    float sum=0;
    int nbN=0;
    float moy=0;
    for (int k = 0; k < ListeN.size(); k++)
        {
            if (e.getId()==ListeN[k].getEtu().getId() && m.getId()==ListeN[k].getMat().getId() )
            {
                sum+=ListeN[k].getNote();
                nbN++;
            }
        }
    return (moy=sum/nbN);
}

float MoyGM(GroupeModule Gm, Etudiant e,vector<Note>ListeN)
{
    float sum=0;
    float coef=0.0;
    for (int i = 0; i < Gm.ListeMat.size(); i++)
    {
        sum+=MoyMat(e,Gm.ListeMat[i],ListeN)*Gm.ListeMat[i].getCoef();
        coef+=Gm.ListeMat[i].getCoef();
    }
    return sum/coef ;
}

float Moyenne(vector<GroupeModule>Tmod,Etudiant e,vector<Note>ListeN)
{
    float moyenne=0;
    float coef=0.0;
    for (int i = 0; i < Tmod.size(); i++)
    {
        moyenne+=MoyGM(Tmod[i],e,ListeN)*Tmod[i].getCoef();
        coef+=Tmod[i].getCoef();
    }
    return moyenne/coef ;
}

void Result(float Moyenne)
{
    (Moyenne>=10) ? cout<<"Admis " : cout<<"Ajourne " ; 
}

void Mention(float Moyenne)
{
    if(Moyenne>=10 && Moyenne<12)
    {
        cout<<"Passable";
    }else if (Moyenne>=12 && Moyenne<14)
    {
        cout<<"Assez Bien";
    }else if (Moyenne>=14 && Moyenne<16)
    {
        cout<<"Bien";
    }else if (Moyenne>=16 && Moyenne<18)
    {
        cout<<"Très Bien";
    }else if (Moyenne>=18 && Moyenne<20)
    {
        cout<<"Excellent";
    }
    
}