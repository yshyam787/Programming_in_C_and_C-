/*
CH-230-A
a9 p2.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    int i = 0;
    double x;
    string s;
    cout << "Enter the number of iterations:" << endl;
    cin >> n;
    cout << "Enter a double value:" << endl;
    cin >> x;
    cout << "Enter a string:" << endl;
    cin >> s;
    while (i < n) {
        cout << s << ":" << x << endl;
        i++;
    }
    return 0;
}