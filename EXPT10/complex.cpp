#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator - (Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << "+" << imag << "i";
        else
            cout << imag << "i";
        cout << endl;
    }
};

int main() {
    float r1, i1, r2, i2;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}
