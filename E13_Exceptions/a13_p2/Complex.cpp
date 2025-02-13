/*
CH-230-A
a13 p2.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex() {
    cout << "Deafult constructor being called." << endl;
    real = 0;
    imaginary = 0;
}

Complex:: Complex(float r, float i) {
    cout << "Parametric constructor is being called." << endl;
    real = r;
    imaginary = i;
} 

Complex:: Complex (const Complex& c) {
    cout << "Copy constructor is being called." << endl;
    real = c.real;
    imaginary = c.imaginary;
}

void Complex:: setReal (float newreal) {
    real = newreal;
}

void Complex:: setImaginary (float newimaginary) {
    imaginary = newimaginary;
}

float Complex:: getReal () {
    return real;
}

float Complex:: getImaginary () {
    return imaginary;
}

void Complex:: print () {
    cout << noshowpos << real << showpos << imaginary << "j"
    << endl;
}

Complex Complex:: Conjugate () {
    Complex conj (real, -imaginary);
    return conj;
}

Complex Complex:: Add (Complex a) {
    Complex addition(real + a.real, imaginary + a.imaginary);
    return addition;
}

Complex Complex::Sub (Complex s) {
    Complex subtraction (s.real - real, s.imaginary - imaginary);
    return subtraction;
}

Complex Complex:: Prod (Complex p) {
    Complex product (real * p.real - imaginary * p.imaginary,
    real * p.imaginary + imaginary * p.real);
    return product;
}

/**************************************************************/
//Operator overloading section starts here. 
istream& operator >> (istream& input, Complex& c) {
    input >> c.real >> c.imaginary;

    //alternative:
    // float rl;
    // float imag;
    // char ch;
    // //setting the real to the real part. 
    // input >> rl;
    // c.setReal(rl);

    // //setting the sign character to check the sign of
    // //the imaginary part.
    // int k = 1;
    // input >> ch;
    // if (ch == '-') {
    //     k = -1;
    // }

    // //setting the imaingary part.
    // input >> imag;
    // c.setImaginary(imag * k);

    // //again getting the imaginary character part. 
    // input >> ch;

    return input;
    // getchar();

}

ostream& operator << (ostream& output, const Complex& c) {
    output << (noshowpos) << c.real << (showpos) << c.imaginary << 
    'i';
    return output;
}

Complex Complex:: operator +(const Complex& a) { 
    Complex addn(this->real + a.real, this-> imaginary + a.imaginary);
    return addn;
}

Complex Complex:: operator -(const Complex& s) {
    Complex subtr(this-> real - s.real, this-> imaginary - s.imaginary);
    return subtr;
}

Complex Complex:: operator *(const Complex& p) {
    Complex prod (real * p.real - imaginary * p.imaginary,
    real * p.imaginary + imaginary * p.real);
    return prod;
}

Complex Complex:: operator =(const Complex& equal) {
    real = equal.real;
    imaginary = equal.imaginary;
    return *this;
}