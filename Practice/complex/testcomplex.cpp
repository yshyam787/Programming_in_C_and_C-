/*
CH-230-A
a13_p3.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/


#include <iostream>
#include "Complex.cpp"
#include <fstream>

using namespace std;

int main () {

    string file1; //name of file
    string file2;
    string file3;
    Complex comp1, comp2;
    cout << "Enter the name of the first file:" << endl;
    cin >> file1;
    ifstream in1(file1.c_str());
    if(!in1.good()){
        cout << "Cannot open file." << endl;
        exit(1);
        in1 >> comp1;
    }
    cout << "Enter the name of the second file:" << endl;
    cin >> file2;
    ifstream in2(file2.c_str());
    if(!in2.good()){
        cout << "Cannot open file." << endl;
        exit(1);
    }
    in2 >> comp2;

    file3 = "Output.txt";
    ofstream out(file3.c_str());
    if(!out.good()){
        cout << "Cannot open file." << endl;
        exit(1);
    }
    out << "The two complex numbers are:" << comp1 << "and" << comp2 << endl;
    out << "Sum:" << comp1+comp2 << endl;
    out << "Difference:" << comp1-comp2 << endl;
    out << "Product:" << comp1*comp2 << endl;

in1.close();
in2.close();
out.close();

return 0;

}