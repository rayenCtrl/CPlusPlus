#ifndef Person_H
#define Person_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

#pragma once

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
    virtual void Print();
    int getId();
    string getName();

};
#endif