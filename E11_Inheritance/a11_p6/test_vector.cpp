/*
CH-230-A
a11 p6.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>

using namespace std;

int main () {
    int n;
    double* values1;
    double* values2;
    cout << "Please enter the size of the vector:" << endl;
    cin >> n;
    values1 = new double[n];
    values2 = new double [n];

    cout << "Please enter the " << n << 
    " values for second vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> values1[i];
    }

    cout << "Please enter the " << n << 
    " values for fourth vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> values2[i];
    }

    //creating instances and setting values. 
    Vector first;
    //first.setPtr(values1);
    cout << "The first vector is:" << endl;
    first.printv();

    Vector second(n, values1);
    second.setPtr(values1);
    cout << "\nThe second vector is:" << endl;
    second.printv();
    
    Vector third (second);
    cout << "\nThe third vector is: " << endl;
    third.printv();

    Vector fourth(n, values2);
    fourth.setPtr(values2);
    cout << "\nThe fourth vector is:" << endl;
    fourth.printv();

    cout << "\nThe norm of second vector is: " <<
    second.norm() << endl;
    cout << "The scalar product of the second and the fourth vector is: "
    << second.scalarprod(fourth) << "." <<endl;
    cout << "The sum of the second and the fourth vector is: ";
    (second.add(fourth)).printv();
    cout << "The difference of second and the fourth vector is: ";
    (second.difference(fourth)).printv();


    return 0;
}