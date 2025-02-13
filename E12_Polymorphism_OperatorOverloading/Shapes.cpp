
/*
CH-230-A
a12 p1.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
    cout << "Deafault constructor is being called." << endl;
}

Shape:: Shape () {
}

Shape:: Shape (const Shape& s) {
	name = s.name;
}
void Shape::printName() const {
	cout << name << endl;
}

void Shape:: setName (string newname) {
	name = newname;
}
string Shape:: getName () {
	return name;
}

/*********************************************/
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape () {
	x = 0;
	y = 0;
}

CenteredShape:: CenteredShape (const CenteredShape& c) {
	x = c.x;
	y = c.y;
}

void CenteredShape:: setX (double newx) {
	x = newx;
}

void CenteredShape:: setY (double newy) {
	y =  newy;
}

double CenteredShape:: getX () {
	return x;
}

double CenteredShape:: getY () {
	return y;
}

/*****************************************/
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon:: RegularPolygon () {
	EdgesNumber = 0;
}

RegularPolygon:: RegularPolygon (const RegularPolygon& r) {
	EdgesNumber = r.EdgesNumber;
}

void RegularPolygon:: setEdgenumber (int newedgenumber) {
	EdgesNumber = newedgenumber;
}
int RegularPolygon:: getEdgenumber () {
	return EdgesNumber;
}

/******************************************/
Hexagon:: Hexagon (const string& n, double nx, double ny, double nside,
	string ncolor) : RegularPolygon (n, nx, ny, 4)
{	
	side = nside;
	color = ncolor;
}

Hexagon:: Hexagon() {
	side = 0;
	color = "blue";
}

Hexagon:: Hexagon (const Hexagon& h) {
	side = h.side;
	color = h.color;
}

void Hexagon:: setSide (double newside) {
	side = newside;
}

void Hexagon:: setColor (string newcolor) {
	color = newcolor;
}

double Hexagon:: getSide () {
	return side;
}

string Hexagon:: getColor () {
	return color;
}

double Hexagon:: hex_perimeter () {
	return 6 * side;
}

double Hexagon:: hex_area () {
	return (3/2) * sqrt(3) * pow(side, 2);
}

/**********************************************/

Circle::Circle(const string& n, double nx, double ny, double r) : 
    CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle:: Circle() {
	Radius = 0;
}

Circle:: Circle (const Circle& r) {
	Radius = r.Radius;
}

void Circle:: setRadius (double newradius) {
	Radius = newradius;
}

double Circle:: getRadius () {
	return Radius;
}

double Circle:: c_perimeter () {
	return (2 * 22.0 / 7.0) * Radius;
}

double Circle:: c_area () {
	return 22 / 7.0 * Radius * Radius;
}