// Searching functions
// Unit 2
// not finished...

#include <iostream>
using namespace std;

// Binary search
int binarySearch1(int array[], int size, int target)
{

    int first = 0,       //index to (current) first elem
        last = size - 1, //index to (current) last elem
        middle,          //index of (current) middle elem
        position = -1;   //index of target value

    while (/* target not found and more elements to check */)
    {

        middle = (first + last) / 2; //calculate midpoint

        if (array[middle] == target)
        {
            position = middle;
        }
        else if (target < array[middle])
        {
            last = middle - 1;
        }
        else
        { // target must be > array[middle] here
            first = middle + 1;
        }
    }
    return position;
}

int main()
{
    int list[] = {2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 79};

    cout << "Search for 11: " << binarySearch1(list, 10, 11) << endl;
    cout << "Search for 35: " << binarySearch1(list, 10, 35) << endl;
}