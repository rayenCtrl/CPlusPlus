#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Person
{
private:
    int id;
    string nom;
    string prenom;
    string mail;

public:
    Person(int,string,string,string);
    Person();
    ~Person();
    virtual void Print();
    int getId();
    string getName();

};
