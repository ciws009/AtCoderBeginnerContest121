#include <iostream>

int main() {
    int a[100][100];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            a[i][j] = j;
        }
    }

    std::cout << a[1:3] << std::endl;

}
