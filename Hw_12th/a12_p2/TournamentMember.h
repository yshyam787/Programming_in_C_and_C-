
/*
CH-230-A
a12 p2.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>
using namespace std;

class TournamentMember 
{
    private:
        char firstname[36];
        char lastname[36];
        char dob[11];
        string position;
        int age;
        static string location;

    public:
        TournamentMember();
        TournamentMember(const char*, char*, char*, string, int);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();

        void setFirstname (const char* newfirstname);
        void setLastname (char* newlastname);
        void setDob (char* newdob);
        void setPosition (string newposition);
        void setAge (int newage);
        void setLocation (string newlocation); //location changing

        char* getFirstname ();
        char* getLastname ();
        char* getDob ();
        string getPosition ();
        int getAge ();
        string getLocation ();

        void print() const;
        
};