//
// Created by Heni on 11/16/2022.
//

#ifndef CPP_2022_COMPANY_H
#define CPP_2022_COMPANY_H
#include "Manager.h"
#include "Employee.h"
#include <vector>

class Company {
private:
    vector<Employee*> emps;
public:
    Company() = default;
    void hire(Employee* e);
    void fire(int id);
    void addToManager(Employee &e, Manager &m);
    void removeFromManager(Employee &e, Manager &m);
    void printEmployees();
    void printManagers();


};


#endif //CPP_2022_COMPANY_H
