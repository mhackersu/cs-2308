#include "Calls.h"
#include <iostream>
using namespace std;

void Calls::set(int i, Time t)
{
    calls[i] = t;
}
void Calls::displayAll()
{
    for (int i = 0; i < 10; i++)
    {
        cout << calls[i].display(); //calls member function
        cout << "  ";
    }
}