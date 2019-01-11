/*
        C++ ÉÏ»ú¿Î ¡¾Æß¡¿      2016.6.13
        P279 £¨2£©
*/
#include <iostream>
using namespace std;

class Complex {
public:
  Complex() {
    real = 0;
    imag = 0;
  }
  Complex(double r, double i) { real = r, imag = i; }
  Complex operator+(Complex &c);
  Complex operator+(int &i);
  friend Complex operator+(int &, Complex &);
  void display();

private:
  double real;
  double imag;
};

Complex Complex::operator+(Complex &c) {
  return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator+(int &i) { return Complex(i + real, imag); }

Complex operator+(int &i, Complex &c) { return Complex(i + c.real, c.imag); }

void Complex::display() { cout << "(" << real << "," << imag << "i)" << endl; }

int main() {
  Complex c1(3, 4), c2(5, -10), c3;
  int i = 5;
  c3 = c1 + c2;
  cout << "c1+c2=";
  c3.display();

  c3 = i + c1;
  cout << "i+c1=";
  c3.display();

  c3 = c1 + i;
  cout << "c1+i=";
  c3.display();

  return 0;
}
