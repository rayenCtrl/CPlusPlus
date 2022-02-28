#include"Etudiant.cpp"
#include"Matiere.cpp"
#include<iostream>
#include<string>
using namespace std;


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
    ~Note();
    void Print();

};