
/*
CH-230-A
a11 p5.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
    cout << "Deafault constructor is being called." << endl;
}

Shape:: Shape () : name ("default") {
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
Rectangle:: Rectangle (const string& n, double nx, double ny, double nwidth,
	double nheight) : RegularPolygon (n, nx, ny, 4)
{	
	width = nwidth;
	height = nheight;
}

Rectangle:: Rectangle() {
	width = 0;
	height = 0;
}

Rectangle:: Rectangle (const Rectangle& r) {
	width = r.width;
	height = r.height;
}

void Rectangle:: setWidth (double newwidth) {
	width = newwidth;
}

void Rectangle:: setHeight (double newheight) {
	height = newheight;
}

double Rectangle:: getWidth () {
	return width;
}

double Rectangle:: getHeight () {
	return height;
}

double Rectangle:: rect_perimeter () {
	return 2 * (width + height);
}

double Rectangle:: rect_area () {
	return width * height;
}

/**********************************************/
Square::Square (const string& s, double nx, double ny, 
	double nside) : Rectangle(s, nx, ny, nside, nside)
{
	side = nside;
}

Square::Square()
{
	side = 0;
}

Square:: Square (const Square& s) 
{
	side = s.side;
}

double Square:: sq_perimeter ()
{
	return 4 * side;
}

double Square:: sq_area () 
{
	return side * side;
}

void Square:: setSide (double newside) 
{
	side = newside;
}

double Square:: getSide () 
{
	return side;
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