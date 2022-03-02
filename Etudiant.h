#ifndef Etudiant_H
#define Etudiant_H

#include"Person.h"

#pragma once

class Etudiant:public Person
{
private:
    int num_insc;
public:
    Etudiant(int,int,string,string,string);
    Etudiant();
    void Print();
    
};
    int Search(vector<Etudiant>,int);
    void Add(vector<Etudiant>&,Etudiant);
    void Del(vector<Etudiant>&,Etudiant);
#endif