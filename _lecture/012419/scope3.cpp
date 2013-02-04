// sample C++ program: Scope

#include <iostream>
using namespace std;


int main() {
    int x = 10;
    if (x < 100) {
        int x = 30;
        cout << x << endl;
    }
    cout << x << endl;
}

