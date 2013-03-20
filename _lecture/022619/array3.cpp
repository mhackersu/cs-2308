// This program uses subscript notation with a pointer variable and
// pointer notation with an array name.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double *doublePtr; // Pointer to a double
    int i;             // Array index

    // Assign the address of the coins array to doublePtr.
    doublePtr = coins;

    // Display the contents of the coins array. Use subscripts
    // with the pointer!
    cout << "Here are the values in the coins array:\n";
    for (i = 0; i < NUM_COINS; i++)
    {
        cout << doublePtr[i] << " ";
        cout << *(doublePtr + i) << endl;
    }

    // Display the contents of the array again, but this time
    // use pointer notation with the array name!
    cout << "\nAnd here they are again:\n";
    for (i = 0; i < NUM_COINS; i++)
    {
        cout << *(coins + i) << " ";
        cout << coins[i] << endl;
    }
    cout << endl;
    return 0;
}