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
public:
    GroupeModule(string, string,float,vector<Matiere>);
    GroupeModule();
    string getId();
    void Print();
    vector<Matiere>ListeMat;
};
    int Search(vector<GroupeModule>,string);
    void Add(vector<GroupeModule>&,GroupeModule);
    void Del(vector<GroupeModule>&,GroupeModule);
#endif