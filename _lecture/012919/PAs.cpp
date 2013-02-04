// This program asks for the programming assignment scores
// for one student. It stores the values in an array.
#include <iostream>
using namespace std;

const int NUM_SCORES = 7;
float computeAvg (int [] );

int main()
{
    int scores[NUM_SCORES];    // one variable, 7 values
    
    // Get the scores for each assignment
    cout << "Enter the " << NUM_SCORES << " programming assignment scores: ";
    for (int i=0; i< NUM_SCORES; i++)
       cin >> scores[i];
    
    // Display the values in the array.
    cout << "The scores you entered are:";
    for (int i=0; i< NUM_SCORES; i++)
        cout << " " << scores[i];
    cout << endl;
    
    cout << "Average : " << computeAvg( scores ) << endl;
    return 0;
}

float computeAvg (int scores[] ) {
    //compute the average
    int sum = 0;
    for (int i=0; i< NUM_SCORES; i++)
        sum = sum + scores[i];
    float avg = (float)(sum) / NUM_SCORES;

    return avg;
}
