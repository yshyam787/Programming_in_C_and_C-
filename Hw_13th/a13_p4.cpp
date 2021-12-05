
/*
CH-230-A
a13 p4.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
    int x;
public:
    void setX(int i) {x = i;}
    void print() { cout << x << endl; }
};

class B:  virtual public A
{
public:
    B()  { setX(10); }
};

class C:  virtual public A  
{
public:
    C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    d.print();
    return 0;
}
/*Error: Since D is the child class of both B and C and
the properties has different values to be printed out, 
it is creating ambiguity for the print() function regarding
which value to print out. 

This error can be removed by making the parent class B
and C virtual. This way, the child class D can have
clear path to the base class A, and print() function
can choose the parent class C to print out the value as
C was derived later.*/