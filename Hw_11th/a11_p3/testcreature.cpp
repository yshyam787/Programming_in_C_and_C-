/*
CH-230-A
a11 p3.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Bird.\n";
    Bird b;
    b.run();
    b.fly();

    cout << "\nCreating a Penguin.\n";
    Penguin p;
    p.run();
    p.swim();

    return 0;
} 