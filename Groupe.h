#ifndef Groupe_H
#define Groupe_H
#pragma once

#include"GroupeModule.h"
#include"Etudiant.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Groupe
{

private:
    int num_G;
    string idGrp;
    string niveau;
    string diplome;
    string specialite;
    vector<GroupeModule> ListeModules; 
    vector<Etudiant> ListeEtudiants;    
public:
    Groupe(int,string,string,string,string,vector<GroupeModule>,vector<Etudiant>);
    Groupe();
    void Print();
    string getId();
    
};

int Search(vector<Groupe>,string);
    void Add(vector<Groupe>&,Groupe);
    void Del(vector<Groupe>&,Groupe);
#endif