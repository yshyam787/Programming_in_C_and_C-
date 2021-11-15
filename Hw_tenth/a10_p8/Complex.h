/*
CH-230-A
a10 p8.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <string>
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

};