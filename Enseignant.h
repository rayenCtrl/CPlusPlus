#ifndef Enseignant_H
#define Enseignant_H

#include"Person.h"

#pragma once

class Enseignant:public Person
{
private:
    int CNSS;
public:
    Enseignant(int,int,string,string,string);
    Enseignant();
    void Print();
    
};

int Search(vector<Enseignant>,int);
    void Add(vector<Enseignant>&,Enseignant);
    void Del(vector<Enseignant>&,Enseignant);
#endif