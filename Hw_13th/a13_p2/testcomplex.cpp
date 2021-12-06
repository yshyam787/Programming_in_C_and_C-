/*
CH-230-A
a13 p2.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
#include <fstream>

using namespace std;

int main () {
    Complex case1;
    cout << "Default complex number:" << endl;
    case1.print();

    float data1;
    float data2;
    cout << "Please enter data for complex numbers:" << endl;
    cout << "Real part: ";
    cin >> data1;
    cout << "Imaginary part: ";
    cin >> data2;
    Complex case2(data1, data2);
    cout << "First complex number:" << endl;
    case2.print();
    Complex Conj = case2.Conjugate();
    cout << "Conjugate of first complex number:" << endl;
    Conj.print();

    float data3;
    float data4;
    cout << "Please enter the data for the another complex numbers:" << endl;
    cout << "Real part: ";
    cin >> data3;
    cout << "Imaginary part: ";
    cin >> data4;
    Complex case3(data3, data4);
    cout << "Second complex number is: " << endl;
    case3.print();
    Complex Addition = case2.Add(case3);
    cout << "Addition of first and second complex number is: " << endl;
    Addition.print();

    Complex Subtraction = case3.Sub(case2);
    cout << "Difference between second and first complex number is: " << endl;
    Subtraction.print();

    Complex Product = case2.Prod (case3);
    cout << "Product of first and second complex number is: " << endl;
    Product.print();

    /*****************************************************************/
    cout << "\n**********************************************" << endl;
    cout << "The operator overloading parts begins here." << endl;

    Complex c1, c2;

    ifstream inputfile1 ("in1.txt");
    if (!inputfile1.good()) {
        cerr << "Error opening first file!" << endl;
        exit(1);
    }
    //copying data from the file1 into complex class c1.
    while (!inputfile1.eof()) {
        inputfile1 >> c1;
    }

    ifstream inputfile2 ("in2.txt");
    if(!inputfile2.good()) {
        cerr << "Error opening second file!" << endl;
        exit(2);
    }
    //copying complex number from file2 into complex class c2.
    while (!inputfile2.eof()) {
        inputfile2 >> c2;
    }

    Complex sum  = c1 + c2;

    ofstream outputfile("output.txt");
    if (!outputfile.good()) {
        cerr << "Error opening the output file!" << endl;
        exit(3);
    }

    cout << "\nWriting sum  into the output file..." << endl;
    outputfile << sum << endl;

    inputfile1.close();
    inputfile2.close();


    return 0;
}