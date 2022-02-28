//#include"Enseignant.cpp"
#include<string>
using namespace std;


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
    ~Matiere();
    string getId();
    void Print();

};
