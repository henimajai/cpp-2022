//
// Created by Heni on 11/16/2022.
//

#ifndef CPP_2022_MANAGER_H
#define CPP_2022_MANAGER_H
#include "Employee.h"
#include <vector>


class Manager : public Employee{
private:
    vector<Employee> emps;

public:
    static const string MANAGER_JOB;
    Manager(const string &firstName, const string &lastName, int birthDate, const string& job );
    void addEmployee(Employee* emp);
    void deleteEmployee(int id);
    int numberOfEmployees();
    void print(ostream &os) const override;
    vector<Employee> getEmps(){return emps;};

};


#endif //CPP_2022_MANAGER_H
