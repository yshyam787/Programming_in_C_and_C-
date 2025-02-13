#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter()
{
    cout <<"Default constructor is being called." << endl;
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;

}

Critter::Critter(std::string newname)
{
    cout << "Constructor with 'name' parameter is being called."
    << endl;
    name = newname;
    hunger = 0;
    boredom = 0;
    height = 5;
}

Critter::Critter(std::string newname, int newhunger, int newboredom, 
double newheight)
{
    cout << "Parametric constructor with default height 10 is being called."
    << endl;
    name = newname;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
}

void Critter:: setName (string newname) {
    name = newname;
}

void Critter:: setHunger (int newhunger) {
    hunger = newhunger;
}

void Critter:: setBoredom (int newboredom) {
    boredom = newboredom;
}

void Critter:: setHeight (double newheight) {
    height = newheight;
}

string Critter:: getName () {
    return name;
}

int Critter:: getHunger () {
    return hunger;
}

int Critter:: getBoredom () {
    return boredom;
}

double Critter:: getHeight () {
    return height;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << 
    ". My boredom level is " << boredom << ". My height is "
    << height << "." << endl;
}