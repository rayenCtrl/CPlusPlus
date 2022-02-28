#include "Etudiant.h"

Etudiant::Etudiant(int numins,int id, string nom,string prenom, string mail)
:num_insc(numins),Person(id,nom,prenom,mail)
{
}

Etudiant::Etudiant():Person()
,num_insc(0)
{
}

Etudiant::~Etudiant()
{
    
}

void Etudiant::Print()
{
    Person::Print();
    cout<<num_insc;
}

int Search(vector<Etudiant>TabE,int id)
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

void Add(vector<Etudiant>&TabE,Etudiant x) 
{
    if (Search(TabE,x.getId())==-1)
    {
        vector<Etudiant>::iterator i;
        i=TabE.begin();
        while((i<TabE.end()) && ((*i).getId()<=x.getId()))
        {
            i++;
        }
        TabE.insert(i,x);
    }
}

void Del(vector<Etudiant>&TabE,Etudiant x)
{
    if (Search(TabE,x.getId())!=-1)
    {
        vector<Etudiant>::iterator i;
        i=TabE.begin();
        while ((i<TabE.end()) && ((*i).getId()!=x.getId()))
        {
            i++;
        }
        TabE.erase(i);
    }
}