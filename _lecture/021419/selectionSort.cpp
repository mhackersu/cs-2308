// Sorting functions
// Unit 2

#include <iostream>
using namespace std;

// Selection sort
int findIndexOfMin(int array[], int size, int start)
{
    int minIndex = start;
    for (int i = start + 1; i < size; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(int array[], int size)
{
    int minIndex;
    for (int index = 0; index < size - 1; index++)
    {
        minIndex = findIndexOfMin(array, size, index);
        swap(array[index], array[minIndex]);
    }
}

int main()
{
    int list[] = {10, 45, 11, 50, 69, 66, 59, 4, 60, 7, 70, 79, 2};

    for (int i = 0; i < 13; i++)
        cout << list[i] << " ";
    cout << endl;

    selectionSort(list, 13);

    for (int i = 0; i < 13; i++)
        cout << list[i] << " ";
    cout << endl;
}