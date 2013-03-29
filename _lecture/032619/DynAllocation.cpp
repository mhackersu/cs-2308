#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    string name;      // Student’s name
    int idNum;        // Student ID number
    int creditHours;  // Credit hours enrolled
    float gpa;        // Current GPA
};


int main()
{
    Student *sptr;
    sptr = new Student;
    
    //fix the errors:
    sptr->name = "Jane Doe";
    (*sptr).idNum = 12345;
    sptr->creditHours = 33;
    sptr->gpa = 3.5;
    
    cout << sptr->name << "  " << sptr->gpa << endl;
    delete sptr;
}

