//
// Created by Heni on 11/16/2022.
//

#include "Employee.h"

int Employee::counter = 0;

void Employee::print(ostream &os) const {
    Person::print(os);
    os << " " << this->job << endl;
}

Employee::Employee(const string &firstName, const string &lastName, int birthDate, const string &job) : Person(
        firstName, lastName, birthDate), job(job) {this->id = counter;
                                                                    counter++;}

int Employee::getId() const {
    return id;
}
