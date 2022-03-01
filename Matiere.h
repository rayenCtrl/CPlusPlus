#ifndef Matiere_H
#define Matiere_H

#include"Enseignant.h"
#include<string>
using namespace std;

#pragma once


class Matiere
{
private:
    string idMat;
    string nomMat;
    float coef;
    Enseignant Ens;
public:
    Matiere(string,string,float,Enseignant);
    Matiere();
    string getId();
    void Print();
    
};
int Search(vector<Matiere>,string);
    void Add(vector<Matiere>&,Matiere); 
    void Del(vector<Matiere>&,Matiere);
#endif