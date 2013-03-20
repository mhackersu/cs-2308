#include <iostream>
using namespace std;

struct Employee
{
    short id;
    int age;
    double wage;
};

void printInfo(Employee employee) {
    cout << "ID: " << employee.id << endl;
    cout << "Age: " << employee.age << endl;
    cout << "Wage: " << employee.wage << endl;
}

int main () {

    // Employee joe;

    // joe.id = 14;
    // joe.age = 32;
    // joe.wage = 24.15;

    // Employee frank;
    // frank.id = 15;
    // frank.age = 28;
    // frank.wage = 18.27;

    Employee joe {14,32,25.15};
    Employee frank {15,28,18.27};

    printInfo(joe);
    cout << endl;
    printInfo(frank);

    return 0;
};