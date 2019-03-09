#include <iostream>
using namespace std;

void insertionSort(int array[], int arraySize) {
    for (int i = 1; i < arraySize; i++) {
        int val = array[i];
        int j = i - 1;
        while(array[j] > val && j >= 0) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = val;
    }
}

int main() {
    int arraySize;
    int *array;

    cin >> arraySize;
    array = new int[arraySize];
    for (int i = 0; i < arraySize; i++) cin >> array[i];

    insertionSort(array, arraySize);

    for(int i = 0; i < arraySize; i++) cout << array[i] << " ";
    cout << endl;

    delete [] array;

    return 0;
}
