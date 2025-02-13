
/*
CH-230-A
a13 p6.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
    //declaring a vectorl.
    vector <int> myvector;
    //creating a vector of 8 for 20 times. 
    for (int i = 0;  i < 20; i++) {
        myvector.push_back(8);
    }

    //printing the vectors. 
    cout << "My vectors are:";
    //initializing iterator
    vector <int>:: iterator it;
    for (it = myvector.begin(); it != myvector.end(); ++it) {
        cout << " " << *it;
    }

    cout << endl;

    try {
        myvector.at(21);
    }

    catch (const out_of_range& oor) {
        cerr << "Out of range error: " << oor.what() << endl;
    }

    return 0;
}