#include <iostream>
using namespace std;

void selectionSort(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        int minj = i;
        for (int j = i; j < arraySize; j++) {
            if (array[j] < array[minj]) {
                minj = j;
            }
            int temp = array[i];
            array[i] = array[minj];
            array[minj] = temp;
        }
    }
}

int main() {
    int arraySize;
    int *array;

    cin >> arraySize;
    array = new int[arraySize];
    for (int i = 0; i < arraySize; i++) cin >> array[i];

    selectionSort(array, arraySize);

    for(int i = 0; i < arraySize; i++) cout << array[i] << " ";
    cout << endl;

    delete [] array;

    return 0;
}
