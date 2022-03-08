#ifndef Note_H
#define Note_H

#include"Etudiant.h"
#include"Matiere.h"
#include<cassert>
#include<iostream>
#include<iomanip>
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
    Matiere getMat();
    Etudiant getEtu();
    string getTyp();
    float getNote();
};
void Add(vector<Note>&,vector<Groupe>&,Note );
void Del(vector<Note>&,Note);
float MoyMat(Etudiant,Matiere,vector<Note>);
float MoyGM(GroupeModule, Etudiant,vector<Note>);
float Moyenne(vector<GroupeModule>,Etudiant,vector<Note>);
void Result(float);
void Mention(float );
#endif