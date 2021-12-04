/*
CH-230-A
a12 p1.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <iostream>
#include "Shapes.cpp"

int main(int argc, char** argv) {
    Circle c("First Circle", 3, 4, 7.0);
    RegularPolygon r("TRIANGLE", 1, 1, 3);
    Hexagon b_hexa("First hexagon", 1, 2, 9, "blue");
    Hexagon g_hexa("Second hexagon", 1, 2, 15, "green");
    Hexagon copyhexa(g_hexa);

    c.printName();
    r.printName();
    b_hexa.printName();
    g_hexa.printName();
    
    
    cout << "\nBlue Hexagon Perimeter: " << b_hexa.hex_perimeter() << endl;
    cout << "Blue hexagon Area: " << b_hexa.hex_area() << endl;

    cout << "\nGreen Hexagon Perimeter: " << g_hexa.hex_perimeter() << endl;
    cout << "Green hexagon Area: " << g_hexa.hex_area() << endl;

    cout << "\nCopy Hexagon Perimeter: " << copyhexa.hex_perimeter() << endl;
    cout << "Copy hexagon Area: " << copyhexa.hex_area() << endl;
    return 0;
}