#include"GroupeModule.cpp"
#include"Etudiant.cpp"
//#include<iostream>
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
    ~Groupe();
    void Print();
    string getId();
};