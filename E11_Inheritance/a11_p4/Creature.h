/*
CH-230-A
a11 p4.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>

class Creature {
	public:
        //empty constructor.
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

//derived class from the parent class.
class Wizard : public Creature {
	public:
        //Default derived class. 
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

class Bird: public Creature {
    public:
        //Empty constructor
        Bird();
        void fly() const;
        ~Bird();
    
    private:
        int flight_duration;
};

class Penguin: public Creature {
    public:
        Penguin();
        void swim() const;
        ~Penguin();

    private: 
        double swim_time;
};