#include"Person.cpp"


class Enseignant:public Person
{
private:
    int CNSS;
public:
    Enseignant(int,int,string,string,string);
    Enseignant();
    ~Enseignant();
    void Print();

};