
/*
CH-230-A
a13 p3.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main ()
{
    int n;
    char filename[50]; // to read up to 50 files.
    cout << "Please enter the number of files: ";
    cin >> n;

    ifstream inputfile; //to read files as inputfile
    ofstream concatfile;//to write into file as concatenated file.
    string line; //to store the content of input files. 

    //opening the output file into binary format and writing the contents
    // of input files in it.
    concatfile.open("concatn.txt", ios::binary | ios::out);
    if (!concatfile.good()) {
        cerr << "Error opening the output file!" << endl;
        concatfile.close();
        exit(1);
    }

    else 
    {
        //getting the file names
        for (int i = 0; i < n; i++) {
            cout << "Please enter the name of " << 
            i+1 << " file:";
            cin >> filename;
            //opening and reading input files in binary.
            inputfile.open(filename, ios::binary | ios:: out);

            if (!inputfile.good()) {
                cerr << "Error opening input file!" << endl;
                exit(1);
            }

            else {
                int length; //length of content of each file. 
                char buff[200];//store the content of each file into buffer.

                //get the length of input file. 

                inputfile.seekg(0, ios::end);
                length = (int) inputfile.tellg();
                //replacing the 'seekg' again at the beginnig of the file. 
                inputfile.seekg(0, ios::beg);

                for (int i = 0; i < length; i++) {
                    //read the content and store in buffer.
                    inputfile.read(buff, length);
                    concatfile.write(buff, inputfile.gcount());
                }
            //add new line to the concatednated file. 
            concatfile << endl;

            }
            inputfile.close();
        }
        concatfile.close();
    }
    
    cout << "The contanatn.txt file has been successfully created." << endl;
    return 0;
}