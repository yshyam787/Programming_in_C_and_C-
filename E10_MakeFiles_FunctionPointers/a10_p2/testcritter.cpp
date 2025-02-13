/*
CH-230-A
a10 p2.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
    int boredom;
    int age;
    double weight;
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

    cout << "Boredom:";
    cin >> boredom;
    c.setBoredom(boredom);
	
    cout << "Age:";
    cin >> age;
    c.setAge(age);
    cout << "Weight:";
    cin >> weight;
    c.setWeight(weight);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}