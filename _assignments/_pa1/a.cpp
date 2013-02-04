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

// struct menuOrderItem {
//     int count;
//     string name;
//     float price;
// };

void newMenuOrder(int, int, int, int, int, int, int, int);
// void newMenuOrder();
void displayMenu ();
void takeOrder ();
void returnMetrics (int, int, int, int, int, int, int, int);
void itemOrderLoop (int, int, int, int, int, int, int, int);

int main () {
    system ("clear"); // clear screen before starting program 

    int masterCountOne = 0;
    int masterCountTwo = 0;
    int masterCountThree = 0;
    int masterCountFour = 0;
    int masterCountFive = 0;
    int masterCountSix = 0;
    int masterCountSeven = 0;
    int masterCountEight = 0;

    // menuOrderItem itemOne;
    // menuOrderItem itemTwo;
    // menuOrderItem itemThree;
    // menuOrderItem itemFour;
    // menuOrderItem itemFive;
    // menuOrderItem itemSix;
    // menuOrderItem itemSeven;
    // menuOrderItem itemEight;

    // // data model test
    // itemOne.count = 1;
    // itemOne.name = "Plain Egg";
    // itemOne.price = 1.45;

    // main program
    char newOrder;
    cout << "Welcome to Hacker Friends Cafe" << endl;
    // cout << itemOne.count << " " << itemOne.name << " " << itemOne.price << endl;

    newMenuOrder(masterCountOne, masterCountTwo, masterCountThree, masterCountFour,
    masterCountFive, masterCountSix, masterCountSeven, masterCountEight);
    
    cin.get();
    cout << "Program has ended." << endl;
    return 0;
}

void newMenuOrder (int masterCountOne, int masterCountTwo, int masterCountThree,
int masterCountFour, int masterCountFive, int masterCountSix, int masterCountSeven, int masterCountEight) {
// void newMenuOrder () {
    char newOrder;
    bool loopMenuA = true;
    
    while (loopMenuA) {
        cout << masterCountOne << endl;
        cout << "N for new order." << endl;
        cout << "E to exit and display subtotal, tax and total." << endl;
        cin >> newOrder;
        switch(newOrder) {
            case 'N':
            case 'n':
                itemOrderLoop (masterCountOne, masterCountTwo, masterCountThree,
                masterCountFour, masterCountFive, masterCountSix, masterCountSeven, 
                masterCountEight);
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

void itemOrderLoop (int masterCountOne, int masterCountTwo, int masterCountThree,
        int masterCountFour, int masterCountFive, int masterCountSix, int masterCountSeven, 
        int masterCountEight) {
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
                masterCountOne = masterCountOne + 1;
                cout << "You have ordered " << masterCountOne << " " << "total for: Plain Egg" << endl;
                break;
            case '2':
                cout << "You have selected 2 for Bacon and Egg" << endl;
                masterCountTwo = masterCountTwo + 1;
                cout << "You have ordered " << masterCountTwo << " " << "total for: Bacon and Egg" << endl;
                break;
            case '3':
                cout << "You have selected 3 for Muffin" << endl;
                masterCountThree = masterCountThree + 1;
                cout << "You have ordered " << masterCountThree << " " << "total for: Muffin" << endl;
                break;
            case '4':
                cout << "You have selected 4 for French Toast" << endl;
                masterCountFour = masterCountFour + 1;
                cout << "You have ordered " << masterCountFour << " " << "total for: French Toast" << endl;
                break;
            case '5':
                cout << "You have selected 5 for Fruit Basket" << endl;
                masterCountFive = masterCountFive + 1;
                cout << "You have ordered " << masterCountFive << " " << "total for: Fruit Basket" << endl;
                break;
            case '6':
                cout << "You have selected 6 for Cereal" << endl;
                masterCountSix = masterCountSix + 1;
                cout << "You have ordered " << masterCountSix << " " << "total for: Cereal" << endl;
                break;
            case '7':
                cout << "You have selected 7 for Coffee" << endl;
                masterCountSeven = masterCountSeven + 1;
                cout << "You have ordered " << masterCountSeven << " " << "total for: Coffee" << endl;
                break;
            case '8':
                cout << "You have selected 8 for Tea" << endl;
                masterCountEight = masterCountEight + 1;
                cout << "You have ordered " << masterCountEight << " " << "total for: Tea" << endl;
                break;
            case 'T':
            case 't':
                cout << "Completing order." << endl;
                returnMetrics(masterCountOne, masterCountTwo, masterCountThree,
                masterCountFour, masterCountFive, masterCountSix, masterCountSeven, 
                masterCountEight);
                loopMenuB = false;
            default:
                cout << endl;
                // break;
            }
        }
};

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

void returnMetrics (int masterCountOne, int masterCountTwo, int masterCountThree,
        int masterCountFour, int masterCountFive, int masterCountSix, int masterCountSeven, 
        int masterCountEight) {

    double masterCountOnePrice = 1.45;
    double masterCountTwoPrice = 2.45;
    double masterCountThreePrice = 0.99;
    double masterCountFourPrice = 1.99;
    double masterCountFivePrice = 2.49;
    double masterCountSixPrice = 0.69;
    double masterCountSevenPrice = 0.50;
    double masterCountEightPrice = 0.75;

    double masterCountOnePriceTotal = masterCountOnePrice * masterCountOne;
    double masterCountTwoPriceTotal = masterCountTwoPrice * masterCountTwo;
    double masterCountThreePriceTotal = masterCountThreePrice * masterCountThree;
    double masterCountFourPriceTotal = masterCountFourPrice * masterCountFour;
    double masterCountFivePriceTotal = masterCountFivePrice * masterCountFive;
    double masterCountSixPriceTotal = masterCountSixPrice * masterCountSix;
    double masterCountSevenPriceTotal = masterCountSevenPrice * masterCountSeven;
    double masterCountEightPriceTotal = masterCountEightPrice * masterCountEight;


    
    cout << "Total Plain Egg: " << masterCountOne << " - Total: $" << masterCountOnePriceTotal << endl;
    cout << "Total Bacon and Egg: " << masterCountTwo << " - Total: $" << masterCountTwoPriceTotal << endl;
    cout << "Total Muffin: " << masterCountThree << " - Total: $" << masterCountThreePriceTotal << endl;
    cout << "Total French Toast: " << masterCountFour << " - Total: $" << masterCountFourPriceTotal << endl;
    cout << "Total Fruit Basket: " << masterCountFive << " - Total: $" << masterCountFivePriceTotal << endl;
    cout << "Total Cereal: " << masterCountSix << " - Total: $" << masterCountSixPriceTotal << endl;
    cout << "Total Coffee: " << masterCountSeven << " - Total: $" << masterCountSevenPriceTotal << endl;
    cout << "Total Tea: " << masterCountEight<< " - Total: $" << masterCountEightPriceTotal << endl;

    // cout << "Subtotal...$   6.15" << endl;
    double subtotalValue = masterCountOnePriceTotal + masterCountTwoPriceTotal + masterCountThreePriceTotal + 
    masterCountFourPriceTotal + masterCountFivePriceTotal + masterCountSixPriceTotal + masterCountSevenPriceTotal +
    masterCountEightPriceTotal;
    double taxRate = .07;
    double taxValue =  subtotalValue * taxRate;
    double grandTotal = subtotalValue + taxValue;

    cout << "Subtotal...$" << subtotalValue << endl;
    cout << "Tax........$" << taxValue << endl;
    cout << "Total......$" << grandTotal << endl;
};