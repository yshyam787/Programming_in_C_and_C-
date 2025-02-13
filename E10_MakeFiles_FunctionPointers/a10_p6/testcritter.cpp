/*
CH-230-A
a10 p6.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include "Crittter.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	Critter c1;
	c1.setHunger(2);
    c1.print();

    string name;
    cout << "Please provide your name: ";
    getline(cin, name);
    Critter c2(name);
	c2.setHunger(2);
    c2.print();

    Critter c3("Krishna", 9, 1, 5.6);
	c3.setHunger(2);
    c3.print();

    Critter c4 ("Purshotam", 9, 1);
	c4.setHunger(2);
    c4.print();

    Critter c5 ("Nikesh", 9, 1, 5.6, 8);
    c5.setHunger(2);
    c5.print();

    return 0;
}