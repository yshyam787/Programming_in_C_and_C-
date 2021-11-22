
#include <iostream>
#include <cmath>
#include "Vector.h"
#include <cstdlib>
using namespace std;

void Vector:: setv_size (int newv_size) 
{
    v_size = newv_size;
}

void Vector:: setelements (double* newelements) 
{
    elements = newelements;
}

int Vector:: getv_size () {
    return v_size;
}

double* Vector:: getelements () {
    return elements;
}

void Vector:: print () const{
    for (int i = 0; i < v_size; i++) {
        cout << elements[i] << " ";
    }
}
Vector Vector:: addition (const Vector v) const {
    double *sum;
    sum = new double[v_size];
    for (int i = 0; i < v_size; i++) {
        sum[i]= elements[i] + v.elements[i];
    }
    Vector v_sum(v_size, sum);
    return v_sum;
}

double Vector:: normality () const {
    double val = 0;
    for (int i = 0; i < v_size; i++) {
        val += pow (elements[i], 2);   
    }
    return sqrt (val);
}

Vector Vector:: differ (const Vector v) const 
{
    double *diff;
    diff = new double[v_size];
    for (int i = 0; i < v_size; i++) {
        diff[i] = elements[i] - v.elements[i];
    }
    Vector v_diff(v_size, diff);
    return v_diff;
}

double Vector:: sprod (const Vector v) const {
    double prod = 0;
    for (int i = 0; i < v_size; i++) {
        prod += elements[i] * v.elements[i];
    }
    return prod;
}

Vector::Vector() 
{
    v_size = 3;
    elements = new double[3];
    elements[1] = elements[2] = elements[3] = 0;
}

Vector:: Vector(int nv_size, double* newelements) 
{
    v_size = nv_size;

    elements = new double[v_size];
    for (int i = 0; i < nv_size; i++) {
        elements[i] = newelements[i];
    }
}

Vector:: Vector (const Vector& v) 
{
    v_size = v.v_size;
    elements = new double[v_size]; 
    for (int i = 0; i < v_size; i++) {
        elements[i] =  v.elements[i];
    }
}

Vector:: ~Vector() 
{   
    delete [] elements;
}