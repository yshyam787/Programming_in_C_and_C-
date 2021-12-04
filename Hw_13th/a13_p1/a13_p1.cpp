
/*
CH-230-A
a13 p1.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;
int main () {
    string filename;
    char buff[100];
    cout << "Please enter the name of the file: " << endl;
    getline (cin, filename);
    ifstream inputfile(filename);
    if (!inputfile.good()) {
        cerr << "Error opening input file." << endl;
        exit(1);
    }

    //storing the position of the '.'.
    int position = filename.find(".");

    //inserting copied at the '.' position. 
    ofstream outputfile (filename.insert(position, "_copied"));

    string line;
    while (inputfile.good()) {
        inputfile.getline(buff, 100);
        outputfile << buff << endl;
    }

    inputfile.close();
    outputfile.close();

    return 0;  
}