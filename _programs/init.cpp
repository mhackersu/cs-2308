#include <iostream>
using namespace std;

int main () {
    float scores[3] = {88, 99};
    // this will auto-fill with a zero
    cout << scores[0] << " " << scores[1] << " " << scores[2] << endl;

    float score[10];
    // this will output garbage
    cout << score[0] << endl;
}
