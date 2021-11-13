    /*
    CH-230-A
    a9 p9.[c++]
    Shyam Yadav
    s.yadav@jacobs-university.de
    */

    #include <iostream>
    #include <string>
    #include <cstdlib>

    using namespace std;
    string modified (string s) {
        for (int i = 0; s[i] != '\0'; i++ ) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || 
                s[i] == 'O' || s[i] == 'U') {
                s[i] = '_';
            }
            cout << s[i];
        }
        cout << endl;
        return s;
    }

    int main () {
        int n;
        string guess;
        string decision;
        int tries = 0;
        string words[17] = {"computer", "television", "keyboard", "laptop", 
        "mouse", "monitor", "cpu", "disk", "drive", 
        "ram", "radio", "fan", "fridge", "lamp", 
        "dryer", "phone", "joystick"};
        
        while (1) {
            cout << "Please enter a number between 1 to 17:" << endl;
            cin >> n;
            getchar();
            cout << "This is your hint." << endl;
            modified (words[n - 1]);
            cout << "Please guess a word:" << endl;
            getline (cin, guess);
            if (guess == "quit") {
                exit(1);
            }
            for (int i = 0; i < 17; i++) {
                if (guess == words [i]) {
                    tries++;
                    cout << "Your tries is " << tries << "." << 
                    "Do you wish to play again?" << endl;
                    getline (cin, decision);
                    if (decision == "yes") {
                        //continue
                    }
                    else {
                        exit(1);
                    }
                }
            }
        }
        return 0;
    }

        