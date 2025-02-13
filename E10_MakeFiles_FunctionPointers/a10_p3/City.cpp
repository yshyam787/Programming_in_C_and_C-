#include <iostream>
#include "City.h"

using namespace std;

void City:: setName (string &newname) {
    name = newname;
}

void City:: setNumofinhab (int newnumofinhab) {
    numofinhab = newnumofinhab;
}

void City:: setMayor (string &newmayor) {
    mayor = newmayor;
}

void City:: setArea(double newarea) {
    area = newarea;
}

string City:: getName() {
    return name;
}

int City:: getNumofinhab () {
    return numofinhab;
}

string City:: getMayor () {
    return mayor;
}

double City:: getArea() {
    return area;
}

void City:: print () {
    cout << "I live in " << name <<". The population of this city is "
    << numofinhab << ". The mayor of the city is Mr." << mayor <<
    ". The area of the city is " << area << "km^2." << endl;
}
