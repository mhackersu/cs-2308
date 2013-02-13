#include <iostream>
using namespace std;

// Binary Search
// Using binary search, array must be sorted first.
// Find mid-point, and use lower-half or upper-half depending if target 
// is less than or greater than value at element mid-point.
// The find mid again, and repeat until value in element equals target.


int binarySearch ( int array[], int size, int target ) {

    int first = 0,
    last = size -1, 
    middle,
    position = -1;

    while ( position == -1 && first <= last ) {
        middle = (first + last) /2; //calc midpoint

        if ( array[middle] == target ) {
            position = middle;
        } else if ( target < array[middle] ) {
            last = middle - 1;
        } else { // target must be > array[middle] here
            first = middle + 1;
            
        }
    } return position;
}

int main () {

    int list[] = {2, 4, 7, 10, 11, 45, 50, 59, 60 , 66, 69, 70, 79};

    cout <<"Search for 11: " << binarySearch(list,13,11) << endl;
    cout <<"Search for 35: "<< binarySearch(list,13,35) << endl;


    return 0;
};