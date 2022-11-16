#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Manager.h"
#include "Company.h"
using namespace std;


int main() {
    cout<< "Persons:" << endl;
    Person person1("Harry", "Potter", 1980);
    cout << "\t" << person1 << endl;
    cout << "*********************" << endl;
    cout << "Employees: " << endl;
    Employee employee1("Hermione", "Granger", 1979, "student");
    Employee employee2("Harry", "Potter", 1980,"student");
    Employee employee3("Draco", "Malfoy", 1980, "student");
    cout << "\t" << employee1 << endl;
    cout << "\t" << employee2 << endl;
    cout<< "*********************" << endl;
    Manager manager1("Piton", "Perselus", 1950, "professor");
    Manager manager2("Albus", "Dumbledore", 1935, "headmaster");
    manager1.addEmployee(&employee1);
    manager1.addEmployee(&employee2);
    manager2.addEmployee(&employee3);
    cout << manager1;
    cout << manager2;
    cout << "Number of employees: " << manager1.numberOfEmployees() << endl;
    cout << "After removing employee with id 1:" << endl;
    manager1.deleteEmployee(1);
    manager1.print(cout);
    manager1.addEmployee(&employee1);
    cout << "Number of employees: " << manager1.numberOfEmployees() << endl;
    cout<< "*********************" << endl;

    Company company;
    company.hire(&employee1);
    company.hire(&employee2);
    company.hire(&employee3);
    company.hire(&manager1);
    company.hire(&manager2);

    cout << "Print all employees of a company: " << endl;
    company.printEmployees();
    cout << "Print managers: " << endl;
    company.printManagers();
    cout<< "*********************" << endl;
    company.removeFromManager(employee1, manager1);
    company.addToManager(employee1,manager2);







    return 0;
}