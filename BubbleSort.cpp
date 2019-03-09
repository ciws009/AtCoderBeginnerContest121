#include <iostream>
using namespace std;

int bubbleSort(int array[], int  arraySize) {
    int sw = 0;
    bool flag = 1;
    for (int i = 0; flag; i++) {
        flag = 0;
        for(int j = arraySize - 1; j >= i + 1; j--) {
            if (array[j] < array[j - 1]) {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
                flag = 1;
                sw += 1;
            }
        }
    }
    return sw;
}

int main() {
    int arraySize, sw;
    int *array;

    cin >> arraySize;
    array = new int[arraySize];
    for (int i = 0; i < arraySize; i++) cin >> array[i];
    sw = bubbleSort(array, arraySize);

    for (int i = 0; i < arraySize; i++) cout << array[i] << " ";
    cout << endl;
    cout << sw << endl;

    delete [] array;

    return 0;
}
