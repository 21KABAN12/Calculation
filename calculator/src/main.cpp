#include <iostream>
#include "calculator.h"

int main() {
    double a, b;
    char op;
    
    std::cout << "Enter operation (a op b): ";
    std::cin >> a >> op >> b;

    try {
        switch(op) {
            case '+':
                std::cout << "Result: " << Calculator::add(a, b) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << Calculator::subtract(a, b) << std::endl;
                break;
            case '*':
                std::cout << "Result: " << Calculator::multiply(a, b) << std::endl;
                break;
            case '/':
                std::cout << "Result: " << Calculator::divide(a, b) << std::endl;
                break;
            default:
                std::cout << "Invalid operator!" << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}