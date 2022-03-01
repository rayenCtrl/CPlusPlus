#ifndef GroupeModule_H
#define GroupeModule_H

#include"Matiere.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
#pragma once



class GroupeModule
{
private:
    string idGM;
    string nomGM;
    float coefGM;
    vector<Matiere>ListeMat;
public:
    GroupeModule(string, string,float,vector<Matiere>);
    GroupeModule();
    string getId();
    void Print();
    
};
int Search(vector<GroupeModule>,string);
    void Add(vector<GroupeModule>&,GroupeModule);
    void Del(vector<GroupeModule>&,GroupeModule);
#endif