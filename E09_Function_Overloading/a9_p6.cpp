/*
CH-230-A
a9 p6.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <cmath>
using namespace std;

int myfirst (int array[], int n) {
    int value;
    for (int i =  0; i < n; i++) {
        if (array[i] > 0 && (array[i] % 2 == 0)) {
            value = array[i];
            break;
        }
        else {
            value = -1;
        }
    }
    return value;
}

double myfirst (double array[], int n) {
    double value;
    for (int i = 0; i < n; i++) {
        if (array [i] < 0 && (fmod(array[i], 1) == 0)) {
            value =  array[i];
            break;
        }
        else {
            value = -1.1;
        }
    }
    return value;
}

void myfirst (char ch[], int n) {
    char value = '0';
    for (int i = 0; i < n; i++) {
        if (ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' &&
        ch[i] != 'u' && ch[i] != 'A' && ch[i] != 'E' && ch[i] != 'I' && 
        ch[i] != 'O' && ch[i] != 'U') {
            value = ch [i];
            break;
        }
        else {
            value = value;
        }
    }
    cout << value << endl;
}

int main () {
    int n;
    cout << "Please enter the number of elements in array:" << endl;
    cin >> n;
    int array_int[n];
    double array_double[n];
    char array_char[n];
    cout << "Please enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array_int[i];
    }

    cout << "Please enter " << n << " doubles:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array_double[i];
    }

    cout << "Please enter " << n << " characters:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array_char[i];
        getchar();
    }

    cout << myfirst (array_int, n) << endl;
    cout << myfirst (array_double, n) << endl;
    myfirst (array_char, n);
    return 0;
}