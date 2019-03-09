#include <iostream>

double func1(int x, int y);
double func2(int x, int y);
void func3(double x, double y);

int main() {
    int x, y;
    std::cin >> x >> y;
    func3(func1(x, y), func2(x, y));
}

double func1(int x, int y) {
    return x + y;
}

double func2(int x, int y) {
    return x / y;
}

void func3(double x, double y) {
    std::cout << "func1: " << x << std::endl;
    std::cout << "func2: " << y << std::endl;
}
