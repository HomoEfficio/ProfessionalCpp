//
// Created by homoefficio on 18. 5. 7.
//

#include "Employee.h"

#include <iostream>

using namespace std;

namespace Records {
    Employee::Employee()
            : firstName(""),
              lastName(""),
              employeeNumber(-1),
              salary(kDefaultStartingSalary),
              hired(false) {}

    void Employee::promote(int raiseAmount) {
        setSalary(getSalary() + raiseAmount);
    }

    void Employee::demote(int demeritAmount) {
        setSalary(getSalary() - demeritAmount);
    }

    void Employee::hire() {
        hired = true;
    }

    void Employee::fire() {
        hired = false;
    };

    void Employee::display() const {
        cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
        cout << "------------------------------------------" << endl;
        cout << (hired ? "Current Employee" : "Former Employee") << endl;
        cout << "Employee Number: " << getEmployeeNumber() << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << endl;
    }

    const string &Employee::getFirstName() const {
        return firstName;
    }

    void Employee::setFirstName(const string &firstName) {
        Employee::firstName = firstName;
    }

    const string &Employee::getLastName() const {
        return lastName;
    }

    void Employee::setLastName(const string &lastName) {
        Employee::lastName = lastName;
    }

    int Employee::getEmployeeNumber() const {
        return employeeNumber;
    }

    void Employee::setEmployeeNumber(int employeeNumber) {
        Employee::employeeNumber = employeeNumber;
    }

    int Employee::getSalary() const {
        return salary;
    }

    void Employee::setSalary(int salary) {
        Employee::salary = salary;
    }

    bool Employee::isHired() const {
        return hired;
    }
}
