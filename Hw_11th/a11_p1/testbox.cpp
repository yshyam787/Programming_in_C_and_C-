#include "Box.cpp"
#include <iostream>

using namespace std;

int main () {
    int n;
    cout << "Please enter the number of box: ";
    cin >> n;
    //allocating memory for 2*n boxes. 
    double *array_boxes = new double[2*n];

    double height;
    double width;
    double depth;

    cout << "Please enter height: ";
    cin >> height;
    cout << "Please enter width: ";
    cin >> width;
    cout << "Please enter depth: ";
    cin >> depth;



    delete []array_boxes;
    return 0;
}