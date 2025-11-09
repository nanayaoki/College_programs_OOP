//Write a C++ program implement simple Arithmetic Calculator with Class
#include <iostream>
using namespace std;

class Calculator {
    float a, b;

public:
    Calculator(float x, float y) {
        a = x;
        b = y;
    }

    float add() { return a + b; }
    float sub() { return a - b; }
    float mul() { return a * b; }
    
    float divide() {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    float num1, num2;
    char choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Calculator calc(num1, num2);

    cout << "\nChoose Operation (+ - * /): ";
    cin >> choice;

    switch (choice) {
        case '+': cout << "Result = " << calc.add() << endl; break;
        case '-': cout << "Result = " << calc.sub() << endl; break;
        case '*': cout << "Result = " << calc.mul() << endl; break;
        case '/': cout << "Result = " << calc.divide() << endl; break;
        default: cout << "Invalid Operation!" << endl;
    }

    return 0;
}
