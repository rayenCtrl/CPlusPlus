#include "Groupe.h"

Groupe::Groupe(int nG,string idG,string nv,string dp,string splt ,vector<GroupeModule>Tmod,vector<Etudiant>Tetu)
:num_G(nG),idGrp(idG),niveau(nv),diplome(dp),specialite(splt),
ListeModules(Tmod),ListeEtudiants(Tetu)
{
}

Groupe::Groupe()
:num_G (0),idGrp (""),niveau (""),diplome (""),specialite (""),
ListeModules(),ListeEtudiants()
{
}

Groupe::~Groupe()
{
}

void Groupe::Print()
{
    cout<<num_G<<""<<idGrp<<""<<niveau<<""<<diplome<<""<<specialite<<endl;
}

string Groupe::getId()
{
    return idGrp;
}

int Search(vector<Groupe>ListGr,string id)
{
    for (int i = 0; i < ListGr.size(); i++)
    {
        if (id==ListGr[i].getId())
        {
            return i;
        }
    }
    return -1;
}

void Add(vector<Groupe>&ListGr,Groupe x) 
{
    if (Search(ListGr,x.getId())==-1)
    {
        vector<Groupe>::iterator i;
        i=ListGr.begin();
        while((i<ListGr.end()) && ((*i).getId()<=x.getId()))
        {
            i++;
        }
        ListGr.insert(i,x);
    }
}

void Del(vector<Groupe>&ListGr,Groupe x)
{
    if (Search(ListGr,x.getId())!=-1)
    {
        vector<Groupe>::iterator i;
        i=ListGr.begin();
        while ((i<ListGr.end()) && ((*i).getId()!=x.getId()))
        {
            i++;
        }
        ListGr.erase(i);
    }
}