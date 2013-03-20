// Searching functions
// Unit 2

#include <iostream>
using namespace std;

//Linear Search
int searchList (int list[], int size, int target) {
    
    for (int i=0; i<size; i++)
    {
        if (list[i]==target)
            return i;
    }
    return -1;
}


int main() {
    int list[] = {2, 4, 7, 10, 11, 45, 79, 70, 66, 59};
    
    cout <<"Search for 11: " << searchList(list,10,11) << endl;
    cout <<"Search for 35: "<< searchList(list,10,35) << endl;
}// Searching functions
// Unit 2

#include <iostream>
using namespace std;

//Linear Search
int searchList (int list[], int size, int target) {
    
    for (int i=0; i<size; i++)
    {
        if (list[i]==target)
            return i;
    }
    return -1;
}


int main() {
    int list[] = {2, 4, 7, 10, 11, 45, 79, 70, 66, 59};
    
    cout <<"Search for 11: " << searchList(list,10,11) << endl;
    cout <<"Search for 35: "<< searchList(list,10,35) << endl;
}