#include "Time.h"
class Calls
{
private:
    Time calls[10];  // times of 10 phone calls
    // this array is initialized using default constructor
public:
    void set(int,Time);
    void displayAll();
};