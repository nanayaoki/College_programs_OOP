#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    Complex operator + (const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator - (const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator * (const Complex &c) {
        return Complex(
            (real * c.real) - (imag * c.imag),
            (real * c.imag) + (imag * c.real)
        );
    }

    Complex operator / (const Complex &c) {
        float denom = (c.real * c.real) + (c.imag * c.imag);
        return Complex(
            ((real * c.real) + (imag * c.imag)) / denom,
            ((imag * c.real) - (real * c.imag)) / denom
        );
    }

    friend istream &operator >> (istream &in, Complex &c) {
        cout << "Enter Real part: ";
        in >> c.real;
        cout << "Enter Imaginary part: ";
        in >> c.imag;
        return in;
    }

    friend ostream &operator << (ostream &out, const Complex &c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1, c2, add, sub, mul, divv;

    cout << "Enter first complex number:\n";
    cin >> c1;

    cout << "\nEnter second complex number:\n";
    cin >> c2;

    add = c1 + c2;
    sub = c1 - c2;
    mul = c1 * c2;
    divv = c1 / c2;

    cout << "\nAddition: " << add;
    cout << "\nSubtraction: " << sub;
    cout << "\nMultiplication: " << mul;
    cout << "\nDivision: " << divv;

    return 0;
}
