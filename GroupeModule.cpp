#include "GroupeModule.h"

GroupeModule::GroupeModule(string idGM,string nGM, float cfGM,vector<Matiere> LMa)
:idGM(idGM),nomGM(nGM),coefGM(cfGM),ListeMat(LMa)
{    
}
GroupeModule::GroupeModule()
:idGM(""),nomGM(""),coefGM(0.0),ListeMat()
{
}

string GroupeModule::getId()
{
    return idGM;
}

void GroupeModule::Print()
{
    cout<<idGM<<""<<nomGM<<""<<coefGM<<endl;
}

int Search(vector<GroupeModule>Tmod,string id)
{
    for (int i = 0; i < Tmod.size(); i++)
    {
        if (id==Tmod[i].getId())
        {
            return i;
        }
    }
    return -1;
}

void Add(vector<GroupeModule>&Tmod,GroupeModule x) 
{
    if (Search(Tmod,x.getId())==-1)
    {
        vector<GroupeModule>::iterator i;
        i=Tmod.begin();
        while((i<Tmod.end()) && ((*i).getId()<=x.getId()))
        {
            i++;
        }
        Tmod.insert(i,x);
    }
}

void Del(vector<GroupeModule>&Tmod,GroupeModule x)
{
    if (Search(Tmod,x.getId())!=-1)
    {
        vector<GroupeModule>::iterator i;
        i=Tmod.begin();
        while ((i<Tmod.end()) && ((*i).getId()!=x.getId()))
        {
            i++;
        }
        Tmod.erase(i);
    }
}