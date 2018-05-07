//
// Created by homoefficio on 18. 5. 7.
//

#ifndef EMPLOYEEEXAMPLE_EMPLOYEE_H
#define EMPLOYEEEXAMPLE_EMPLOYEE_H

#endif //EMPLOYEEEXAMPLE_EMPLOYEE_H

#pragma once
#include <string>
using namespace std;

namespace Records {
    const int kDefaultStartingSalary = 30000;

    class Employee {
    public:
        Employee();

        Employee(const string &firstName, const string &lastName, int employeeNumber, int salary, bool hired);

        void promote(int raiseAmount = 1000);
        void demote(int demeritAmount = 1000);
        void hire();
        void fire();
        void display() const;

        const string &getFirstName() const;
        void setFirstName(const string &firstName);

        const string &getLastName() const;
        void setLastName(const string &lastName);

        int getEmployeeNumber() const;
        void setEmployeeNumber(int employeeNumber);

        int getSalary() const;
        void setSalary(int salary);

        bool isHired() const;

    private:
        string firstName;
        string lastName;
        int employeeNumber;
        int salary;
        bool hired;
    };
}