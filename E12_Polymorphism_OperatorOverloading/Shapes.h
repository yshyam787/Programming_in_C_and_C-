
/*
CH-230-A
a12 p1.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

using namespace std;

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  

		void setName (std:: string name);
		string getName ();
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
        // usual three constructors
		CenteredShape(const std::string&, double, double);  
		CenteredShape();
		CenteredShape(const CenteredShape&);
        // moves the shape, i.e. it modifies it center
		void move(double, double);

		void setX (double newx);
		void setY (double newy);
		double getX ();
		double getY ();
        
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape { 
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

		void setEdgenumber (int newedgenumber);
		int getEdgenumber();
};

class Hexagon : public RegularPolygon {
    private:
        double side;
        string color;
    
    public:
        Hexagon (const string&, double,
		double, double, string);
		Hexagon();
        Hexagon (const Hexagon&);
        
        double hex_perimeter();
        double hex_area ();

        void setSide (double newside);
		void setColor (string newcolor);
		double getSide (); 
		string getColor ();
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {  
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);

        double c_perimeter ();
        double c_area ();

		void setRadius (double newradius);
		double getRadius ();
};
    
#endif