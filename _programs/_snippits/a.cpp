// File Name: _snippits/a.cpp
//
// Author: (Hacker, Michael)
// Date: 01/02/2019
// Assignment Number: 1
// CS 2308.255 Spring 2019
// Instructor: Jill Seaman
//
// (Program to demonstrate an array of structs).

#include <iostream>
using namespace std;

// struct Student {
//     int idNumber;
//     string name;
//     int age;
//     string major;
// };

struct newPerson
{
    /* data */
    char name[20];
    int age;
};


int main () {
    system ("clear");

struct Student {
    int idNumber;
    string name;
    int age;
    string major;
};


    cout << "Hello Program." << endl;

//    {
//        Student roster[] = {
//            { 123, "Ann Page", 22, "Math" },
//            { 321, "Jack Spade", 18, "Physics" }
//        };
//    }
//
    Student studentRecords[3];
    studentRecords[0] = {123, "Ann Page", 22, "Math"};
    studentRecords[1] = {321, "Jack Spade", 18, "Physics"};
    studentRecords[2] = {333, "Emily Dikenson", 20, "Communications"};
    
    newPerson bucky =
    {
        "Bucky",
        23
    };

//    cout << roster[0].idNumber << endl;
    cout << "ID Number " << studentRecords[0].idNumber << endl;

    cout << "New person item: " << bucky.name << endl;
    
    
    
    
    // system("pause");
    cout << "Press any key to continue..." << endl;
    cin.get();
    cout << "Program has ended." << endl;
    return 0;
    } 
   
