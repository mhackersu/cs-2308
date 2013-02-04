// sample C++ program: Default arguments

#include <iostream>
using namespace std;


#include <iostream>
#include <cmath>
using namespace std;

void symbols(char ch='$', int count=10) {
    for (int i=0; i < count; i++)
        cout << ch;
    cout << endl;
}

int main() {
    int x = 2;
    symbols();
    symbols(65);
    symbols('*',x);
}
