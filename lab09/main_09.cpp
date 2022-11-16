#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Manager.h"
using namespace std;


int main() {
    Person person1("Harry", "Potter", 1980);
    cout << person1 << endl;
    Employee employee1("Hermione", "Granger", 1979, "student");
    cout << employee1 << endl;
    Manager manager1("Piton", "Perselus", 1950, "professor");
    cout << manager1;
    //manager1.addEmployee(employee1);
    return 0;
}