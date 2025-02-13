/*
CH-230-A
a11 p6.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include "Vector.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

Vector::Vector() 
{
    size = 2;
    ptr = new double[2];
    //initializing 0s in both positions. 
    ptr[1] = ptr[2] = 0;
}

Vector:: Vector(double nsize, double* newptr) 
{
    size = nsize;
    //allocating memory of the vector size to 
    //the pointer.
    ptr = new double[size];
    //assigning values to the allocated memory. 
    for (int i = 0; i < nsize; i++) {
        ptr[i] = newptr[i];
    }
}

Vector:: Vector (const Vector& v) 
{
    size = v.size;
    ptr = new double[size]; //allocating memory
    //copying each values into the memory. 
    for (int i = 0; i < size; i++) {
        ptr[i] =  v.ptr[i];
    }
}

Vector:: ~Vector() 
{   
    //destructor automatically deletes every elements. 
    delete [] ptr;
}

void Vector:: setSize (int newsize) 
{
    size = newsize;
}

void Vector:: setPtr (double* newptr) 
{
    ptr = newptr;
}

int Vector:: getSize () {
    return size;
}

double* Vector:: getPtr () {
    return ptr;
}

void Vector:: printv () const{
    cout << "(";
    for (int i = 0; i < size - 1; i++) {
        cout << ptr[i] << ", ";
    }
    cout << ptr[size - 1] << ")" << endl;
}

double Vector:: norm () const {
    double normval = 0.0;
    for (int i = 0; i < size; i++) {
        normval += pow (ptr[i], 2.0);   
    }
    return sqrt (normval);
}

double Vector:: scalarprod (const Vector v) const {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        //multiplying two vectors. one is the default and another
        //is from the copy constructor. 
        sum += ptr[i] * v.ptr[i];
    }
    return sum;
}

Vector Vector:: add (const Vector v) const {
    double *sum;
    /*allocating memory for doing the sum of two
    vectors and adding stroing their values in 'n'
    different locations. */
    sum = new double[size];
    for (int i = 0; i < size; i++) {
        sum[i]= ptr[i] + v.ptr[i];
    }
    Vector s(size, sum);
    return s;
}

Vector Vector:: difference (const Vector v) const 
{
    double *diff;
    /*Allocating memory for the storing difference*/
    diff = new double[size];
    //calculating difference.
    for (int i = 0; i < size; i++) {
        diff[i] = ptr[i] - v.ptr[i];
    }
    Vector d(size, diff);
    return d;
    
}