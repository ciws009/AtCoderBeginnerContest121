#include <iostream>

int main() {
    int arraySize;
    int *array;

    std::cin >> arraySize;
    array = new int[arraySize];

    for(int i = 0; i < arraySize; i++) std::cin >> array[i];

    for(int i = arraySize - 1; i >= 0; i--) {
        for(int j = i - 1; j >= 0; j--) {
            if(array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i = 0; i < arraySize; i++) std::cout << array[i] << " ";
    std::cout << std::endl;

}
