#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include"Note.h"
#include"Groupe.h"

using namespace std;

void Affiche(Groupe g,vector<Note>&ListeN)
{
    cout<<setw(33)<<left<<" ";
    for (int i = 0; i < g.ListeModules.size(); i++)
    {
        //cout<<g.ListeModules[i].getCoef()<<" ";
        cout<<setw(8*(g.ListeModules[i].ListeMat.size()+1))<<left<<g.ListeModules[i].getNmGM();       
    }
    cout<<endl;
    cout<<setw(33)<<left<<" ";
    //LIST GROUPE MODULE
    for (int i = 0; i < g.ListeModules.size(); i++)
    {
        for (int j = 0; j < g.ListeModules[i].ListeMat.size(); j++)
        {
            cout<<setw(8)<<left<<g.ListeModules[i].ListeMat[j].getNmMa();            
        }
        cout<<setw(8)<<left<<"Moymod";
    }
    cout<<"MG";
    cout<<endl;
    //LISTE MATIERE

    for (int i = 0; i < 32; i++)
    {
        cout<<"-";
    }
    cout<<endl;

    for (int i = 0; i < g.ListeEtudiants.size(); i++)
    {
        cout<<setw(10)<<left<<g.ListeEtudiants[i].getNinsc();
        cout<<setw(10)<<left<<g.ListeEtudiants[i].getName();
        cout<<setw(10)<<left<<g.ListeEtudiants[i].getPrenom()<<" : ";
        for (int j = 0; j < g.ListeModules.size(); j++)
        {
            for (int k = 0; k < g.ListeModules[j].ListeMat.size(); k++)
            {
                cout<<setw(7)<<left<<MoyMat(g.ListeEtudiants[i],g.ListeModules[j].ListeMat[k],ListeN)<<" ";
            }
            cout<<setw(7)<<left<<MoyGM(g.ListeModules[j],g.ListeEtudiants[i],ListeN)<<" ";
        }
        cout<<setw(7)<<left<<Moyenne(g.ListeModules,g.ListeEtudiants[i],ListeN)<<" ";
        Result(Moyenne(g.ListeModules,g.ListeEtudiants[i],ListeN));
        Mention(Moyenne(g.ListeModules,g.ListeEtudiants[i],ListeN));
        cout<<endl;
    }
    
}