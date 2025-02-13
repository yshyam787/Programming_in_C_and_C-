
/*
CH-230-A
a13 p8.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class Motor 
{
    public:
    //creating a copy constructor for the use of derived class. 
    Motor(){}
        //throwing an error.
        string what() throw () {
            return "This motor has problems";
    }
};

//deriving parent class from grandparent class.
class Car: public Motor 
{
    public:
    //copy constructor for child class.
        Car(){};
};

class Garage: public Car
{
    public:
        //delcaring parametric constructor for using it later.
        Garage(string g){cout << g << endl;}
        Garage () try :Car() {
            throw Garage 
            ("The car in this garage has problems with the motor");
        }
        catch (Motor& m) {
            cerr << m.what() << endl;
        }
};

int main () 
{
    try {
        Garage g;
    }
    catch (Garage& e) {
        cerr << e.what() << endl;
    }
    return 0;
}