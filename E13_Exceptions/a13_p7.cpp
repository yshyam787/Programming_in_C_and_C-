
/*
CH-230-A
a13 p3.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

class OwnException: public exception
{
    private:
        string def_string;
    public:
        OwnException (string b) {def_string = b;}
        //redefining what.
        const char* what () const throw() {
            return "OwnException\n";
        }

        void setDef_string(string s) {def_string = s;}
        string getDef_string () {return def_string;}

};

void exception_func(int val) {

        if (val == 1) {
            throw 'a';
        }
        else if (val == 2) {
            throw 12;
        }
        else if (val == 3) {
            throw true;
        }
        else 
        {
            throw OwnException ("Default case exception!");
        }
    }
int main() {
    try
    {
        exception_func(1);
    }
    catch(const char& c)
    {
        cerr << "Caught in main: " << c << endl;
    }
    
    try
    {
        exception_func(2);
    }
    catch(const int& i)
    {
        std::cerr << "Caught in main: " << i << endl;
    }

    try {
        exception_func(3);
    }
    catch (const bool& b) 
    {
        cerr << "Caught in main: " << b << endl;
    }

    try
    {
        exception_func(89);
    }
    catch(OwnException& e)
    {
        cerr << "Caught in main: " << e.what() << endl;
    }
    
    return 0;
    
}