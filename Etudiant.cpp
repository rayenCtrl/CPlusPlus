#include "Etudiant.h"

Etudiant::Etudiant(int numins,int id, string nom,string prenom, string mail)
:num_insc(numins),Person(id,nom,prenom,mail)
{
}

Etudiant::Etudiant():Person()
,num_insc(0)
{
}

void Etudiant::Print()
{
    cout<<num_insc<<" ";
    Person::Print();
}

int Etudiant::getNinsc()
{
    return this->num_insc;
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
    for (int i = 0; i < TabE.size(); i++)
    {
        if(TabE[i].getId()==x.getId())
        {
            TabE.erase(TabE.begin()+i);
        }
    } 
}