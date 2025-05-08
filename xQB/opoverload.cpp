#include <iostream>
using namespace std;

class Complex{
  float real, imag;
  public:
    Complex(float r = 0, float i = 0) {
      real = r;
      imag = i;
    }

    Complex operator+(Complex c){
      Complex res;
      res.real = real + c.real;
      res.imag = imag + c.imag;
      return res;
    }

    void display(){
      cout << real << "+" << imag << "i" << endl;
    }
};

int main(){
  Complex c1(2,3);
  Complex c2(1,2);
  Complex c3 = c1+c2;
  c3.display();
  return 0;
}