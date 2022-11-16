//
// Created by Heni on 11/16/2022.
//

#include "Company.h"

void Company::printManagers() {
    for(auto man:emps){
        Manager* manager = dynamic_cast<Manager*>(man);
        if(manager!=NULL){
            man->print(cout);
            cout << endl;
        }
    }
}

void Company::printEmployees() {
    for(auto emp:emps){
        emp->print(cout);
        cout << endl;
    }
}

void Company::hire(Employee *e) {
    if( e != nullptr){
            emps.push_back(e);
    }
    else {
        cout << "You can't hire this person " << endl;
    }

}

void Company::fire(int id) {
    int index = 0;
    for(auto& e:emps){
        index++;
        if(e->getId() == id){
            emps.erase(emps.begin()+index);
        }
    }
}

void Company::addToManager(Employee &e, Manager &m) {
    m.addEmployee(&e);
}

void Company::removeFromManager(Employee &e, Manager &m) {
    int index=0;
    for(auto& emp:m.getEmps()){
        index++;
        if(e.getId()==emp.getId()){
            m.getEmps().erase(m.getEmps().cbegin()+index);
        }
    }
}
