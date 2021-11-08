/*
CH-230-A
a9 p5.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main () {
    int die_number;
    int guess;
    int count = 0;
    string name;
    cout << "Please enter your name:" << endl;
    getline (cin, name);
    //initializing the random number generator. 
    srand (static_cast <unsigned int> (time(0)));
    int randomnum = rand();
    //limiting random number betweeen 1 and 100. 
    die_number = randomnum % 100;

    while (count < 10) {
        cout << "Please guess a number:" << endl;
        cin >> guess;
        if (guess > die_number) {
            cout << "Your guess is too high!" << endl;
        }
        else if (guess < die_number) {
            cout << "Your guess is too low!" << endl;
        }
        else if (guess == die_number) {
            cout << "Contratulations " << name <<"! You won in "
            << count + 1 << " trials." << endl;
            exit(1);
        }
        else {
            cout << "Sorry! Your guess was not accurate." << endl;
        }
        count++;
    }

    return 0;
}