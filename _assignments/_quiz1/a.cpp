// Quiz 1 - Solution

#import <iostream>
using namespace std;

bool check ( int values[], int size, int a, int b ) {
    for (int i=0; i<size; i++) {
        if (values[i] < a || values[i] > b)
            return false;
    }
    return true;
}

int main () {
    int array[5] = {0,30,0,10,35};
    if (check (array,5,0,39))
        cout << "Yes it is." << endl;
    else
        cout << "No it is not." << endl;
    
    return 0;
}