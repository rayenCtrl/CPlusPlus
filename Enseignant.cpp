#include "Enseignant.h"

Enseignant::Enseignant(int cnss,int id, string nom,string prenom, string mail)
:CNSS(cnss),Person(id,nom,prenom,mail)
{
}

Enseignant::Enseignant():Person()
,CNSS(0)
{
}


void Enseignant::Print()
{
    cout<<CNSS<<" ";
    Person::Print();
}

int Search(vector<Enseignant>TabE,int id)
{
    for (int i = 0; i < TabE.size(); i++)
    {
        if (id==TabE[i].getId())
        {
            return i;
        }
    }
    return -1;
}

void Add(vector<Enseignant>&TabE,Enseignant x) 
{
    if (Search(TabE,x.getId())==-1)
    {
        vector<Enseignant>::iterator i;
        i=TabE.begin();
        while((i<TabE.end()) && ((*i).getId()<=x.getId()))
        {
            i++;
        }
        TabE.insert(i,x);
    }
}

void Del(vector<Enseignant>&TabE,Enseignant x)
{
    if (Search(TabE,x.getId())!=-1)
    {
        vector<Enseignant>::iterator i;
        i=TabE.begin();
        while ((i<TabE.end()) && ((*i).getId()!=x.getId()))
        {
            i++;
        }
        TabE.erase(i);
    }
}