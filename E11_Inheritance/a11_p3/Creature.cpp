/*
CH-230-A
a11 p3.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include "Creature.h"

using namespace std;

//Calling default constructor and setting distance value to 10.
Creature::Creature(): distance(10)
{
    cout << "Empty constructor for Creature is being called." << endl;
}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}

Creature:: ~Creature()
{
    cout << "Destructor for creature is being called." << endl;
}

/**********************************************************/

//derived class from the parent class.
Wizard::Wizard() : distFactor(3)
{
    cout << "Empty constructor for Wizard is being called." << endl;
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard:: ~Wizard() 
{
    cout << "Destructor for Wizard is being called." << endl;
}

/*********************************************************/

Bird:: Bird() : flight_duration (6) 
{
    cout << "Empty constructor for Bird is being called." << endl;
}

void Bird:: fly() const 
{
    cout << "Flight over " << flight_duration << " km!" << endl;
}

Bird:: ~Bird() 
{
    cout << "Destructor for Spder is being called." << endl;
}

/********************************************************/

Penguin:: Penguin()
{
    swim_time =  10;
    cout << "Empty constructor for Penguin is being called." 
    << endl;
}

void Penguin:: swim() const 
{
    cout << "Swimming for " << swim_time << " minutes!" << endl;
}

Penguin:: ~Penguin() 
{
    cout << "Destructor for Penguin is being caled." << endl;
}
