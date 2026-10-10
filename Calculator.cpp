#include <iostream>


long double div(long double x, long double y) {
    if (y != 0)
        return x / y;
    else
        std::cout << "Error: Division by zero.\n";
}

int main(void) {

    return 0;
}