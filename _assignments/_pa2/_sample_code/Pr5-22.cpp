// This program reads data from a file.
// The file contains a series of pairs:  a number followed by a string.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;
    string x;
    
    // Open the file.
    inputFile.open("dataset.txt");
    
    int count = 0;
    // Read the numbers and strings from the file and
    // display them.
    while (inputFile >> number)  //while the input of the next number succeeds
    {
        inputFile >> ws;
        getline(inputFile, x);  //input the next string
        cout << number << " " << x << endl;
        count++;
    }
    
    // Close the file.
    inputFile.close();
    return 0;
}
