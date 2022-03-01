#ifndef Note_H
#define Note_H

#include"Etudiant.cpp"
#include"Matiere.cpp"
#include<iostream>
#include<string>
using namespace std;

#pragma once




class Note
{
private:
    Matiere Mat;
    Etudiant Etu;
    float note;
    string type;    
public:
    Note(Matiere, Etudiant, float, string);
    Note();
    void Print();

};
#endif