//Example using Calls and Time classes
#include<iostream>
#include "Calls.h"    //this includes “Time.h”
using namespace std;

int main() {
    Calls callTimes;
    Time t1(4,30);
    callTimes.set(0,t1);
    Time t2(11,42);
    callTimes.set(1,t2);
    
    callTimes.displayAll();
    cout  << endl;
}
