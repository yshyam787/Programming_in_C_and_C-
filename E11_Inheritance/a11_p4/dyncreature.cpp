/*
CH-230-A
a11 p4.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "Creature.h"

using namespace std;

int main()
{   
    while (1) {
        string input;
        cout << "\nPlease enter the choice of your object: " << endl;
        getline(cin, input);
        if (input == "quit") {
            exit(1);
        }

        else if (input == "wizard") 
        {
            cout << "Creating a Wizard.\n";
            Wizard *w1;
            //dynamically creating a wizard object.
            w1 = new Wizard;
            w1 -> run();
            w1 -> hover();
            delete w1;
        }

        else if (input == "bird") 
        {
            cout << "Creating a Bird.\n";
            Bird *b1;
            //dynamically creating a wizard object.
            b1 = new Bird;
            b1 -> run();
            b1 -> fly();
            delete b1;
        }
        else if (input == "penguin") 
        {
            cout << "Creating a penguin.\n";
            Penguin *p1;
            //dynamically creating a wizard object.
            p1 = new Penguin;
            p1 -> run();
            p1 -> swim();
            delete p1;
        }

        else {
            cout << "The input was invalid. Please try again!"
            << endl;
        }
    }
    
    return 0;
} 