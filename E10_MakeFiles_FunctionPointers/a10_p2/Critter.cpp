#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom (int newboredom) {
    boredom = newboredom;
}

void Critter::setAge (int newage) {
    age = newage;
}

void Critter::setWeight (double newweight) {
    weight = newweight;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << 
    ". My boredom level is "<< boredom  << ". My age is " << 
    age<< ". My weight is "<< weight<< "."<< endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom () {
    return boredom;
}

int Critter::getAge () {
    return age;
}

double Critter::getWeight() {
    return weight;
}