/*
CH-230-A
a11 p1.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

Box:: Box() {
    height = 0;
    width = 0;
    depth = 0;
    cout << "Default constructor is being called." << endl;
}

Box:: Box (double newheight, double newwidth, double newdepth) {
    height = newheight;
    width = newwidth;
    depth = newdepth;
    cout << "Parametric constructor is being called." << endl;
}

Box:: Box (const Box& b) {
    height = b.height;
    width = b.width;
    depth = b.depth;
    cout << "Copy constructor is being called." << endl;
}

Box:: ~Box () {
    cout << "Destructor is being called." << endl;
}

void Box:: setHeight (double newheight) {
    height = newheight;
}
void Box:: setWidth (double newwidth) {
    width = newwidth;
}
void Box:: setDepth (double newdepth) {
    depth = newdepth;
}

double Box:: getHeight () {
    return height;
}
double Box:: getWidth () {
    return width;
}
double Box:: getDepth () {
    return depth;
}

double Box::volume () { 
    return height * width * depth;
}

void Box:: print() {
    cout << "Volume: " << volume () << endl;
}

