// File Name: _pa1/a.cpp
//
// Author: (Hacker, Michael)
// Date: 01/02/2019
// Assignment Number: 1
// CS 2308.255 Spring 2019
// Instructor: Jill Seaman
//
// Program for menu ordering system with multiple orders.

#include <iostream>
using namespace std;

struct menuOrderItem {
    int count;
    string name;
    float price;
};

// void newMenuOrder(int &, int &, int &, int &, int &, int & int & int);
void newMenuOrder();
void displayMenu ();
void takeOrder ();
void returnMetrics ();
void itemOrderLoop ();

int main () {
    system ("clear"); // clear screen before starting program 

    // int masterCountOne;
    // int masterCountTwo;
    // int masterCountThree;
    // int masterCountFour;
    // int masterCountFive;
    // int masterCountSix;
    // int MasterCountSeven;
    // int MasterCountEight;

    menuOrderItem itemOne;
    menuOrderItem itemTwo;
    menuOrderItem itemThree;
    menuOrderItem itemFour;
    menuOrderItem itemFive;
    menuOrderItem itemSix;
    menuOrderItem itemSeven;
    menuOrderItem itemEight;

    // data model test
    itemOne.count = 1;
    itemOne.name = "Plain Egg";
    itemOne.price = 1.45;


    char newOrder;
    cout << "Welcome to Hacker Friends Cafe" << endl;

    cout << itemOne.count << " " << itemOne.name << " " << itemOne.price << endl;




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
    cout << "Select the number next to the item you wish to order." << endl;
    cout << endl;
};

void takeOrder () {
    char orderEntry;
    cout << "Input the item numbers for the order, 0 to quit" << endl;
    cin >> orderEntry;

    bool loopMenuC = true;
    displayMenu();
    while (loopMenuC) {
        // displayMenu(); 
        switch(orderEntry) {
            case '0':
                cout << "You have selected quit." << endl;
                // loopMenuC = false;
                break;
            case '1':
                cout << "A Plain Egg has been added to you order." << endl;
                // loopMenuC = false;
                break;
            case '2':
                cout << "An order for bacon and egg has been added to your order." << endl;
                // loopMenuC = false;
                break;
            default:
                cout << "Invalid selection." << endl;
                // loopMenuC = false;

        }
    }
};

void returnMetrics () {
    cout << "Subtotal...$   6.15" << endl;
    cout << "Tax........$   0.43" << endl;
    cout << "Total......$   6.58" << endl;
};

// void newMenuOrder (int &one int &two int &three int &four int &five int &six int &seven int &eight) {
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
                itemOrderLoop();
                break;
            case 'E':
            case 'e':
                cout << "Exiting program." << endl;
                // returnMetrics();
                loopMenuA = false;
            default:
                // operator does not match any case constant (N, n, E, e)
                cout << endl;
                // break;
        }
    }
};

void itemOrderLoop () {

    char itemOrder;
    bool loopMenuB = true;
    cout << "Please place your order" << endl; 
    displayMenu();
    while(loopMenuB) {
        cout << "Press T to Total Order" << endl;
        cin >> itemOrder;
        
        switch(itemOrder) {
            case '1':
                cout << "You have selected 1 for Plain Egg" << endl;
                break;
            case '2':
                cout << "You have selected 2 for Bacon and Egg" << endl;
                break;
            case '3':
                cout << "You have selected 3 for Muffin" << endl;
                break;
            case '4':
                cout << "You have selected 4 for French Toast" << endl;
                break;
            case '5':
                cout << "You have selected 5 for Fruit Basket" << endl;
                break;
            case '6':
                cout << "You have selected 6 for Cereal" << endl;
                break;
            case '7':
                cout << "You have selected 7 for Coffee" << endl;
                break;
            case '8':
                cout << "You have selected 8 for Tea" << endl;
                break;
            case 'T':
            case 't':
                cout << "Completing order." << endl;
                returnMetrics();
                loopMenuB = false;
            default:
                cout << endl;
                // break;
            }
        }
};
