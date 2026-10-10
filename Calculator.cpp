#include <iostream>


long long add(int x, int y) {
    return x + y;
}

long long sub(long long x, long long y) {
    return x - y;
}

long double divide(long double x, long double y) {
    if (y != 0)
        return x / y;
    else {
        std::cout << "Error: Division by zero.\n";
        return 0;
    }
}

long long mul(long long x, long long y) {
    return x * y;
}

int main(void) {
    int a, b;
    std::cin >> a >> b;
    std::cout << add(a, b) << '\n';
    std::cout << sub(a, b) << '\n';
    std::cout << mul(a, b) << '\n';
    std::cout << divide(a, b) << '\n';
    return 0;
}