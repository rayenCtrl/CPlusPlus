//#include"Matiere.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;


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
    ~GroupeModule();
    string getId();
    void Print();

};