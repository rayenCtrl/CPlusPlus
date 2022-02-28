#include"Person.cpp"


class Etudiant:public Person
{
private:
    int num_insc;
public:
    Etudiant(int,int,string,string,string);
    Etudiant();
    ~Etudiant();
    void Print();

};