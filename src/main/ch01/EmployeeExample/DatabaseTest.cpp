//
// Created by homoefficio on 18. 5. 7.
//
#include <iostream>

#include "Database.h"

using namespace std;
using namespace Records;

int main() {
    Database myDB;

    Employee& emp1 = myDB.addEmployee("Greg", "Wallis");
    emp1.fire();

    Employee& emp2 = myDB.addEmployee("Marc", "Gregoire");
    emp2.setSalary(100000);

    Employee& emp3 = myDB.addEmployee("John", "Doe");
    emp3.setSalary(10000);
    emp3.promote();

    cout << "All employees: " << endl << endl;

    myDB.displayAll();

    cout << endl << "Current employees: " << endl << endl;

    myDB.displayCurrent();

    cout << endl << "Former employees: " << endl << endl;

    myDB.displayFormer();

    return 0;
}
