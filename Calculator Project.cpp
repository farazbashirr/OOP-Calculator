#include <iostream>
using namespace std;

// Calculator class
class Calculator {
public:
    // Addition
    double add(double a, double b) {
        return a + b;
    }

    // Subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Division
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

// Main function
int main() {
    Calculator calc;
    double num1, num2;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Result: " << calc.add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << calc.subtract(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << calc.multiply(num1, num2) << endl;
        break;
    case '/':
        cout << "Result: " << calc.divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
        break;
    }

    return 0;
}
