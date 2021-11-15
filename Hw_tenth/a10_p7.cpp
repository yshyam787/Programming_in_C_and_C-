#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*); //empty constructor.
	NaiveString(const NaiveString&); //copy constructor.
	void update(char, char);
	void print();
    ~NaiveString();
};

NaiveString::NaiveString(const char* t) {
    cout << "Parametric constructor is being called." << endl;
    //allocating memory for string and end of line.
	str = new char[strlen(t) + 1];
    //copying value of character pointer into allocated memory.
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/

NaiveString:: ~NaiveString () 
{
    cout << "Destructor is being called." << endl;
    delete [] str;
}

NaiveString::NaiveString(const NaiveString& src) {
    cout << "Copy constructor is being called." << endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

void funcByRef(NaiveString &t) {
    cout << "funcbyref() being called" << endl;
    t.update('B', 'C');
    t.print();
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();
	cout << "1. About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();

    cout << "-----------------------" << endl;
    NaiveString b("aBBBBBBa");
    b.print();
    cout << "2. About to call the funcbyref()" << endl;
    funcByRef (b);
    b.print();

    return 0;

}