#include "Person.h"

Person::Person()
:id(0),nom(""),prenom(""),mail("")
{ 
}

Person::Person(int id,string nm,string pnm,string ml)
:id(id),nom(nm),prenom(pnm),mail(ml)
{
}


void Person::Print()
{
    cout<<id<<" "<<nom<<" "<<prenom<<" "<<mail<<endl;
}

int Person::getId()
{
    return this->id;
}
string Person::getPrenom()
{
    return this->prenom;
}

string Person::getName()
{
    return this->nom;
}


