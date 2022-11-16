//
// Created by Heni on 11/16/2022.
//

#ifndef CPP_2022_PERSON_H
#define CPP_2022_PERSON_H
#include <string>
#include <iostream>
using namespace std;


class Person {
public:
    Person( string firstName,  string lastName, int birthDate);

    virtual void print(ostream& os) const;


protected:
    string firstName;
    string lastName;
    int birthDate;

};


ostream & operator<<(ostream& os,const Person& p);

#endif //CPP_2022_PERSON_H
