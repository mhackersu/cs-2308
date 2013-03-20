#include <iostream>
using namespace std;

const int NUM_SCORES = 7; // global named constant

float computeAvg (int []);

int main () {
    // const int NUM_SCORES = 7;
    int scores[NUM_SCORES];

    cout << "Enter " << NUM_SCORES << " scores:" << endl;

    // use a loop to gather requirements
    for (int i=0; i<NUM_SCORES; i++) {
        cin >> scores[i];
    }

    cout << "The scores you entered were: " << endl;

    for (int i=0; i<NUM_SCORES; i++) {
        cout << " " << scores[i];
    } cout << endl;

    // compute and output the avg
    cout << "The AVG score is " << computeAvg (scores) << endl;

    return 0;
}

float computeAvg (int scores[] ) {
    // arrays are always passed by reference - no need for amperstand

    int sum = 0;
    for (int i=0; i<NUM_SCORES; i++) {
    sum = sum + scores[i];
    } float avg = static_cast<float>(sum) / NUM_SCORES;
    // float avg = (float)(sum) / NUM_SCORES; Older C-Style for casting

    scores[0] = 0;

    // return 2;
    return avg;
}

// exercises todo:
// find min, max, etc.
