#include "Matiere.h"

Matiere::Matiere(string idMa,string nMa,float cf,Enseignant Ens)
:idMat(idMa),nomMat(nMa),coef(cf),Ens(Ens)
{
}
Matiere::Matiere()
:idMat(""),nomMat(""),coef(0.0),Ens()
{
}


string Matiere::getId()
{
    return this->idMat;
}

string Matiere::getNmMa()
{
    return nomMat;
}
void Matiere::Print()
{
    cout<<idMat<<" "<<nomMat<<" "<<coef<<endl;
    Ens.Print();
}

float Matiere::getCoef()
{
    return this->coef;
}

int Search(vector<Matiere>TabM,string id)
{
    for (int i = 0; i < TabM.size(); i++)
    {
        if (id==TabM[i].getId())
        {
            return i;
        }
    }
    return -1;
}

void Add(vector<Matiere>&TabM,Matiere x) 
{
    if (Search(TabM,x.getId())==-1)
    {
        vector<Matiere>::iterator i;
        i=TabM.begin();
        while((i<TabM.end()) && ((*i).getId()<=x.getId()))
        {
            i++;
        }
        TabM.insert(i,x);
    }
}

void Del(vector<Matiere>&TabM,Matiere x)
{
    for (int i = 0; i < TabM.size(); i++)
    {
        if(TabM[i].getId()==x.getId())
        {
            TabM.erase(TabM.begin()+i);
        }
    }  
}