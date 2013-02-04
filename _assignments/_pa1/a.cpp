// File Name: _pa1/a.cpp
//
// Author: (Hacker, Michael)
// Date: 01/02/2019
// Assignment Number: 1
// CS 2308.255 Spring 2019
// Instructor: Jill Seaman
//
// (Program to output "Hello Program." to the screen).

#include <iostream>
using namespace std;








void newMenuOrder();
void displayMenu ();
void takeOrder ();
void returnMetrics ();


int main () {
    system ("clear"); // clear screen before starting program 
    char newOrder;
    cout << "Welcome to Hacker Friends Cafe" << endl;

    newMenuOrder();
    
    cin.get();
    cout << "Program has ended." << endl;
    return 0;
    }

void displayMenu () {
    cout << "[ [ T O D A Y S   M E N U ] ]" << endl;
    cout << "[1] Plain Egg          $ 1.45" << endl;
    cout << "[2] Bacon and Egg      $ 2.45" << endl;
    cout << "[3] Muffin             $ 0.99" << endl;
    cout << "[4] French Toast       $ 1.99" << endl; 
    cout << "[5] Fruit Basket       $ 2.49" << endl; 
    cout << "[6] Cereal             $ 0.69" << endl; 
    cout << "[7] Coffee             $ 0.50" << endl; 
    cout << "[8] Tea                $ 0.75" << endl;

};

void takeOrder () {
    char orderEntry;
    cout << "Input the item numbers for the order, 0 to quit" << endl;
    cin >> orderEntry;
    switch(orderEntry) {
        case '1':
            cout << "A Plain Egg has been added to you order." << endl;
            break;
        default:
            // Operator does not match case constant (1)
            cout << "Error! Operator is not correct" << endl;
            break;
    }
};

void returnMetrics () {
    cout << "Subtotal...$   6.15" << endl;
    cout << "Tax........$   0.43" << endl;
    cout << "Total......$   6.58" << endl;
};

void newMenuOrder () {
    char newOrder;
    bool loopMenuA = true;
    
    while (loopMenuA) {

        cout << "N for new order." << endl;
        cout << "E to exit and display subtotal, tax and total." << endl;
        cin >> newOrder;
        switch(newOrder) {
            case 'N':
            case 'n':
                cout << "You have selected new order." << endl;
                displayMenu();
                takeOrder();
                break;
            case 'E':
            case 'e':
                cout << "Exiting program." << endl;
                returnMetrics();
                loopMenuA = false;
            default:
                // operator does not match any case constant (N, n, E, e)
                cout << "Error! Invaid input." << endl;
                // break;
        }
    }
}






