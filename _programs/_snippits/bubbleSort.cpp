#include <iostream>

using namespace std;

void bubbleSort (int a[], int size) {
     
     bool swapped = ;
     do {
         swapped = false; //reset swapped to false before each pass
         for (int i=0; i < size-1; i++) {
             if (a[0] > a[1]) {
                 swap(a[i], a[i+1]);
                 swapped = true;
             }
         }
     }
} while (swapped);

int main () {

    int list[] = {10,45,11,50,69,66,59,4,60,7,70,79,2};

    for (int i=0; i<13; i++)
        cout << list[i] << " ";
    cout << endl;

    bubbleSort (list, 13);

    for (inti=0; i<13; i++)

    return 0;
};