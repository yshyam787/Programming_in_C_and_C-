
/*
CH-230-A
a12 p2.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <string>

using namespace std;

//assigning the initial static value. 
string TournamentMember:: location = "Barcelona";
TournamentMember:: TournamentMember() 
{
    cout << "Empty constructor is being called....." << endl;
    for (int i = 0; i < 36; i++) {
        firstname[i] = 0;
        lastname[i] = 0;
    }

    for (int i = 0; i < 11; i++) {
        dob[i] =  0;
    }

    position = "Mid-fielder";
    age = 30;
}

TournamentMember:: TournamentMember(const char* fn, char*ln, char*ndob, 
string npos, int nage)
{
    cout << "Parametric constructor being called....." << endl;
    setFirstname(fn);
    // for (int i =  0; i < 35; i++) {
    //     firstname[i] = fn[i];
    //     lastname[i] = ln[i];
    //     dob [i] = ndob[i];
    // }
    // position = npos;
    // age = nage;
}

TournamentMember:: TournamentMember(const TournamentMember& t) 
{
    cout << "Copy constructor being called...." << endl;
    strcpy(firstname, t.firstname);
    strcpy(lastname, t.lastname);
    strcpy(dob, t.dob);
    position = t.position;
    age = t.age;
}

TournamentMember:: ~TournamentMember() 
{
    cout << "Destructor is being called...." << endl;
}

inline void TournamentMember:: setFirstname (const char* newfirstname) 
{
    for (int i = 0; i < 35; i++) {
        firstname[i] = newfirstname[i];
    }
}

inline void TournamentMember:: setLastname (char* newlastname) 
{
    strcpy(lastname, newlastname);
}

inline void TournamentMember:: setDob (char* newdob) 
{
    strcpy(dob, newdob);
}

inline void TournamentMember:: setPosition (string newposition) 
{
    this -> position = newposition;
}

inline void TournamentMember:: setAge (int newage) 
{
    this -> age = newage;
}

//setting location
inline void TournamentMember:: setLocation (string newlocation) 
{
    location = newlocation;
}

inline char*  TournamentMember:: getFirstname () {
    return this->firstname;
}

inline char*  TournamentMember:: getLastname () {
    return this->lastname;
}

inline char*  TournamentMember:: getDob () {
    return this -> dob;
}

inline string TournamentMember:: getPosition () {
    return position;
}

inline int TournamentMember:: getAge () {
    return age;
}

inline string TournamentMember:: getLocation () {
    return location;
}

void TournamentMember:: print() const {
    cout << "First name: " << firstname << endl;
    cout << "Last name: " << lastname << endl;
    cout << "Date of birth: " << dob << endl;
    cout << "Position in field: " << position << endl;
    cout << "Age: " << age << endl;
    cout << "Location: " << location << endl;
}