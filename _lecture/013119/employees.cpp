// sample C++ program: Structs: decl, vars, . and initialization

#include <iostream>
#include <iomanip>
using namespace std;

struct EmployeePay  {
    string name;         // Employee name
    int empNum;          // Employee number
    double payRate;      // Hourly pay rate
    double hours;        // Hours worked
    double grossPay;     // Gross pay
};

void displayEmp(EmployeePay [] );

int main()  {

    EmployeePay employee[2] = {
      {"Betty Ross", 141, 18.75},
      {"Jill Sandburg", 142, 17.50}
    };
    
    cout << fixed << setprecision(2);
    
    // Calculate pay for employee 1
    for (int i=0; i<2; i++) {
        cout << "Name: " << employee[i].name << endl;
        cout << "Employee Number: " << employee[i].empNum << endl;
        cout << "Enter the hours worked by this employee: ";
        cin >> employee[i].hours;
        employee[i].grossPay = employee[i].hours * employee[i].payRate;
        cout << "Gross Pay: " << employee[i].grossPay << endl << endl;
    }
    cout << endl;
    displayEmp(employee );
}

void displayEmp(EmployeePay employees[] ) {
    for (int i=0; i<2; i++) {
        cout << employees[i].name << endl;
    }
    
}
