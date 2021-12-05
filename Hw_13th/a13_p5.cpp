
/*
CH-230-A
a13 p5.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
    int x;
public:
    A(int i) { x = i; }
    void print() { cout << x << endl; }
};

class B: virtual public A
{
public:
    B():A(10) {  }
};

class C:  virtual public A 
{
public:
    C():A(10) {  }
};

class D: public B, public C {
    public:
        D():A(10) {}; //constructor for A
};

int main()
{
    D d;
    d.print();
    return 0;
}

/*Error: Since the child class D is derived from the grandparent
class A, and both of them do not have the default constructor in
it's public, it's absence throws an error.

Thus, this error can be solved my defining the default constructor in 
public for D, and initializing default values for the property of the base 
class A. 
*/