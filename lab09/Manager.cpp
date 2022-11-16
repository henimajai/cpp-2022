//
// Created by Heni on 11/16/2022.
//

#include "Manager.h"
string Manager::MANAGER_JOB="Manager";
Manager::Manager(const string& firstName,const string& lastName, int birthDate,const string& job) : Employee(firstName, lastName,birthDate, job) {

}

void Manager::addEmployee(Employee *empl) {
    if(empl != nullptr) {
        emps.push_back(*empl);
    }

}

void Manager::deleteEmployee(int id) {
    int index = 0;
    for(auto& emp:emps){
        index++;
        if(emp.getId() == id){
            emps.erase(emps.cbegin()+index -1);
        }
    }
}

int Manager::numberOfEmployees() {
    return emps.size();
}

void Manager::print(ostream &os) const {
    cout << MANAGER_JOB << " ";
    Employee::print(os);
    cout << "beosztottjai:\n";
    for(auto emp:emps){
        cout<<"\t";
        emp.print(os);
        cout<<endl;
    }
}
