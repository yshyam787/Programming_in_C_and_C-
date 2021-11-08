/*
CH-230-A
a9 p4.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

int mycount (int x, int y) {
    return y - x;
}

int mycount (char ch, string st) {
    int count  = 0;

    for (int i = 0; st[i] != '\0'; i++) {
        if (st[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    int x, y;
    cout << "Please enter a number:" << endl;
    cin >> x;
    cout << "Please enter another number:" << endl;
    cin >> y;
    char ch;
    string string1;
    cout << "Please enter a character:" << endl;
    cin >> ch;
    getchar(); // reads the return keys. 
    cout << "Please enter a string:" << endl;
    getline(cin, string1);
    cout << mycount(x, y) << endl;
    cout << mycount (ch, string1) << endl;

    return 0;
}