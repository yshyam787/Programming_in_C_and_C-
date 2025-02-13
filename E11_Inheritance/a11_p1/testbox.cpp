/*
CH-230-A
a11 p1.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include "Box.cpp"
#include <iostream>

using namespace std;

int main () {
    int n;
    double height;
    double width;
    double depth;
    cout << "Please enter the number of box: ";
    cin >> n;

    Box *b1;
    //allocating memory for 2*n boxes. 
    b1 = new Box[2*n];

    cout << "Please enter the height, width, and depth of " << 
        n << " boxes." << endl;
    for (int i = 0; i < n; i++) {
        //storing height, width, and depth in first three positions.
        cout << "Height:";
        cin >> height;
        b1[i].setHeight(height);

        cout << "Width:";
        cin >> width;
        b1[i].setWidth(width);

        cout << "Depth:";
        cin >> depth;
        b1[i].setDepth(depth);
        cout << "-----------------------" << endl;
    }

    for (int i = n; i < 2 * n; i ++) {
        //copying height, width, and depth in remaining three different
        //locations using copy constructor
        b1[i] = Box (b1[i -n]);

        cout << "Volume [" << (i - n) + 1 << "] : " << b1[i].volume() <<endl;
    }



    delete [] b1;
    return 0;
}