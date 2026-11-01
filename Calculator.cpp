#include <iostream>
#include <pybind11/pybind11.h>

namespace py = pybind11;

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

long long mod(long long x, long long y) {
    return x % y;
}

long long power(long long base, long long exp) {
    if (exp < 0)
        return 0;

    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}

PYBIND11_MODULE(Calculator, m) {
    m.doc() = "Calculator C++ extension module";
    m.def("add", &add, "Add two numbers");
    m.def("sub", &sub, "Subtract two numbers");
    m.def("divide", &divide, "Divide two numbers");
    m.def("mul", &mul, "Multiply two numbers");
    m.def("mod", &mod, "Modulus two numbers");
    m.def("power", &power, "Power two numbers");
}

int main(void) {
    int a, b;
    std::cin >> a >> b;
    std::cout << add(a, b) << '\n';
    std::cout << sub(a, b) << '\n';
    std::cout << mul(a, b) << '\n';
    std::cout << divide(a, b) << '\n';
    std::cout << mod(a, b) << '\n';
    std::cout << power(a, b) << '\n';
    return 0;
}
