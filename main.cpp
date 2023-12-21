// main.cpp
#include <iostream>
#include "calculator.h"

int main() {
    Calculator myCalculator;

    int x = 10, y = 5;

    // використання функцій класу Calculator
    std::cout << "Sum: " << myCalculator.add(x, y) << std::endl;
    std::cout << "Difference: " << myCalculator.subtract(x, y) << std::endl;
    std::cout << "Product: " << myCalculator.multiply(x, y) << std::endl;

    // перевірка ділення на 0
    std::cout << "Quotient: " << myCalculator.divide(x, 0) << std::endl;

    return 0;
}
