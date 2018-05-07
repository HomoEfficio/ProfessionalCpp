//
// Created by homoefficio on 18. 5. 7.
//

#ifndef EMPLOYEEEXAMPLE_DATABASE_H
#define EMPLOYEEEXAMPLE_DATABASE_H

#endif //EMPLOYEEEXAMPLE_DATABASE_H

#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records {
    const int kFirstEmployeeNumber = 100;

    class Database {
    public:
        Database();

        Database(int nextEmployeeNumber);

        Employee& addEmployee(const string& firstName, const string& lastName);
        Employee& getEmployee(int employeeNumber);
        Employee& getEmployee(const string& firstName, const string& lastName);

        void displayAll() const;
        void displayCurrent() const;
        void displayFormer() const;

    private:
        vector<Employee> employees;
        int nextEmployeeNumber;
    };
}