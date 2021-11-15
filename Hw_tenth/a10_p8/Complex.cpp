/*
CH-230-A
a10 p8.[c++]
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
