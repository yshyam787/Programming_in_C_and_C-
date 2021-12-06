/*
CH-230-A
a13 p8[cpp]
Krishna Gautam
k.gautam@jacobs-university.de
*/
#include <exception>
#include <iostream>

using namespace std;

class Motor{
    public:
    Motor(){throw "This motor has problems";}
};

class Car: public Motor{
    public:
    Car(): Motor(){};
};

class Garge{
    public:
    Garge(){
        try{
            //using empty constructor for the derived class. 
            Car c; 
        }
        catch(const char* a){
            cerr << "Additional exception!" << endl; 
        }
        throw "The car in this garage has problems with the motor";
    }
};

int main(){
    try{Garge g;}
    catch(const char* c){cerr << c << endl;}
    return 0;
}
