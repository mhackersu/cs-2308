// This program demonstrates that a pointer may be used as a
// parameter to accept the address of an array.
#include <iostream>
#include <iomanip>
using namespace std;

const int QTRS = 4;

// Function prototypes
void getSales(double *, int);
double totalSales(double *, int);

int main()
{
    cout << fixed << setprecision(2);
    double sales[QTRS];

    // Get the sales data for all quarters.
    getSales(sales, QTRS);

    // Display the total sales for the year.
    cout << "The total sales for the year are $";
    cout << totalSales(sales, QTRS) << endl;
    return 0;
}
void getSales(double arr *, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the sales figure for quarter ";
        cout << (i + 1) << ": ";
        cin >> arr[i]; // remove the [ ] here ... replace with equivalent expr
    }
}
double totalSales(double arr *, int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}