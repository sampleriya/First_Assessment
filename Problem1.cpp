#include<bits/stdc++.h>
using namespace std;

// Calculator class to perform basic arithmetic operations
class Calculator {
private:
    double a;
    double b;

public:
    // Constructor to set values
    Calculator(double num1, double num2) {
        a = num1;
        b = num2;
    }

    // Addition
    double add() {
        return a + b;
    }

    // Subtraction
    double subtract() {
        return a - b;
    }

    // Multiplication
    double multiply() {
        return a * b;
    }

    // Division with safety check
    double divide() {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    double x, y;
    string op;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    // Creating calculator object
    Calculator calc(x, y);

    // Checking operation type and printing result
    if (op == "+") {
        cout << "Result: " << calc.add() << endl;
    }
    else if (op == "-") {
        cout << "Result: " << calc.subtract() << endl;
    }
    else if (op == "*") {
        cout << "Result: " << calc.multiply() << endl;
    }
    else if (op == "/") {
        cout << "Result: " << calc.divide() << endl;
    }
    else {
        cout << "Invalid Operation!" << endl;
    }

    return 0;
}
