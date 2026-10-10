#include <iostream>


long long add(int x, int y) {
    return x + y;
}

long long sub(long long x, long long y) {
    return x - y;
}

long double div(long double x, long double y) {
    if (y != 0)
        return x / y;
    else
        std::cout << "Error: Division by zero.\n";
}

int main(void) {

    return 0;
}