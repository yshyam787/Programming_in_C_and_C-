
/*
CH-230-A
a13 p2.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <string>
using namespace std;

class Complex {
    private:
        float real;
        float imaginary;
    public:
        Complex(); //default empty constructor. 
        //parametric constructor for setting the values. 
        Complex (float, float); 
        Complex (const Complex&); //Copy constructor.

        void print();


        //setter methods
        void setReal (float newreal);
        void setImaginary (float newimaginary);

        //getter methods. 
        float getReal ();
        float getImaginary ();

        Complex Conjugate();
        Complex Add(Complex a);
        Complex Sub(Complex s);
        Complex Prod(Complex p);

        //operators overloading
        friend istream& operator >> (istream& input, Complex&);
        friend ostream& operator << (ostream& output, const Complex&);

        Complex operator +(const Complex&);

};