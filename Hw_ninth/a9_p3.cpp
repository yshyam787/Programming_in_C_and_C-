/*
CH-230-A
a9 p3.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>

using namespace std;

float absolute(float x) {
    if (x < 0) {
        return -x;
    }
    else if (x > 0) {
        return x;
    }
    else return x;
}

int main() {
    float value;
    cout << "Please enter any floating number: " << endl;
    cin >> value;
    cout << absolute (value) << endl;

    return 0;

}