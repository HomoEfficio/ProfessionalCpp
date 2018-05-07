//
// Created by homoefficio on 18. 5. 7.
//
#include <iostream>
#include <stdexcept>

#include "Database.h"

using namespace std;

namespace Records {
    Database::Database() : nextEmployeeNumber(kFirstEmployeeNumber) {}

    Employee &Database::addEmployee(const string &firstName, const string &lastName) {
        Employee emp;
        emp.setFirstName(firstName);
        emp.setLastName(lastName);
        emp.setEmployeeNumber(nextEmployeeNumber++);
        emp.hire();
        employees.push_back(emp);

        return employees[employees.size() - 1];
    }

    Employee& Database::getEmployee(int employeeNumber) {
        for (auto& emp: employees) {
            if (emp.getEmployeeNumber() == employeeNumber) {
                return emp;
            }
        }
        throw runtime_error("No employee found.");
    }

    void Database::displayAll() const {
        for (auto& emp: employees) {
            emp.display();
        }
    }

    void Database::displayCurrent() const {
        for (auto& emp: employees) {
            if (emp.isHired()) {
                emp.display();
            }
        }
    }

    void Database::displayFormer() const {
        for (auto& emp: employees) {
            if (!emp.isHired()) {
                emp.display();
            }
        }
    }
}