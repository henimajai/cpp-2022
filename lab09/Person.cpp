//
// Created by Heni on 11/16/2022.
//

#include "Person.h"

Person::Person( string firstName, string lastName, int birthDate) : firstName(firstName),
                                                                                 lastName(lastName),
                                                                                 birthDate(birthDate) {}

void Person::print(ostream &os) const{
    os << this->firstName << " " << this->lastName << " " << this->birthDate;
}

ostream & operator<<(ostream& os,const Person& p) {
    p.print(os);
    return os;
}