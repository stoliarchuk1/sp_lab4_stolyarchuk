// calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();  // конструктор
    ~Calculator(); // деструктор

    // функції для арифметичних операцій
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    float divide(int a, int b);
};

#endif // CALCULATOR_H
