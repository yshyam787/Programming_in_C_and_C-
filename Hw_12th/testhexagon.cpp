/*
CH-230-A
a12 p1.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

int main(int argc, char** argv) {
    Circle c("First Circle", 3, 4, 7.0);
    RegularPolygon r("TRIANGLE", 1, 1, 3);
    Rectangle rect("First rectangle", 1, 2, 2, 2);
    Square sq("First Square", 1, 2, 4);

    r.printName();
    c.printName();
    rect.printName();
    sq.printName();
    
    cout << "\nCircle perimeter: " << c.c_perimeter() << endl;
    cout << "Circle area: " << c.c_area() << endl;
    
    cout << "\nRectangle perimeter: " << rect.rect_perimeter() << endl;
    cout << "Rectangle area: " << rect.rect_area() << endl;

    cout << "\nSquare perimeter: " << sq.sq_perimeter() << endl;
    cout << "Square area: " << sq.sq_area() << endl;

    return 0;
}