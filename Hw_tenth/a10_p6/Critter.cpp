#include"Crittter.h"
#include <iostream>

using namespace std;

Critter::Critter()
{
    cout <<"Default constructor is being called." << endl;
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = hunger;

}

Critter::Critter(std::string newname)
{
    cout << "Constructor with 'name' parameter is being called."
    << endl;
    name = newname;
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = hunger;
}

Critter::Critter(string newname, int newhunger, int newboredom, 
double newheight)
{
    cout << "Parametric constructor with default height 10 is being called."
    << endl;
    name = newname;
	//hunger in parametric constructor is in int type but we need them
	//into double according to our data type. 
    hunger = getdHunger(newhunger);
    boredom = newboredom;
    height = newheight;
    thirst = hunger;
}

Critter:: Critter (string newname, int newhunger, int newboredom,
double newheight, double newthirst)
{
    name = newname;
    hunger = getdHunger(newhunger);
    boredom = newboredom;
    height = newheight;
    thirst = newthirst;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << getiHunger() << 
    ". My boredom level is " << boredom << ". My height is "
    << height << ". My thirst level is " << thirst << "." << endl;
}

void Critter::setName (string newname) {
	name = newname;
}

void Critter::setHunger (int newhunger) {
	//converting inputted int hunger into double hunger
	//and setting values. 
	hunger = getdHunger (newhunger);
}

void Critter::setBoredom (int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight (double newheight) {
	height = newheight;
}

void Critter::setThirst (double newthirst) {
    thirst = newthirst;
}

string Critter::getName () {
	return name;
}

int Critter::getHunger () {
    return hunger;
}

int Critter:: getBoredom () {
    return boredom;
}

double Critter:: getHeight () {
    return height;
}

double Critter:: getThirst () {
    return thirst;
}



//Converting integer hunger to double, and dividing by 10. 
double Critter:: getdHunger(int hunger) {
	return (double) hunger / 10.0;
}

//Converting previous double hungers to int and changing it into 
//percentage by multiplying by 10. 
int Critter::getiHunger() {
	return (hunger * 10);
}
