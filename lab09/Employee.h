//
// Created by Heni on 11/16/2022.
//

#ifndef CPP_2022_EMPLOYEE_H
#define CPP_2022_EMPLOYEE_H
#include "Person.h"

class Employee : public Person{
protected:
    static int counter;
    int id;
    string job;
public:
    Employee(const string& firstName,const string& lastName, int birthDate,const string& job);
    virtual void print(ostream &os) const;

    int getId() const;


};


#endif //CPP_2022_EMPLOYEE_H
