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
    
        vector<Note>::iterator i;
        i=ListeN.begin();
        while ((i<ListeN.end()) &&
        ((*i).getMat().getId() != x.getMat().getId())&& 
        ((*i).getEtu().getId() != x.getEtu().getId())&&
        ((*i).getTyp() != x.getTyp())
        )
        {
            i++;
        }
        ListeN.erase(i);
    
}