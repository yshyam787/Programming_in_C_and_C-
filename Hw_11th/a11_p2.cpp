/*
CH-230-A
a11 p2.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
        //empty constructor.
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

//Calling default constructor and setting distance value to 10.
Creature::Creature(): distance(10)
{
    cout << "Empty constructor for Creature is being called." << endl;
}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}

Creature:: ~Creature()
{
    cout << "Destructor for creature is being called." << endl;
}

/**********************************************************/

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

Wizard::Wizard() : distFactor(3)
{
    cout << "Empty constructor for Wizard is being called." << endl;
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard:: ~Wizard() 
{
    cout << "Destructor for Wizard is being called." << endl;
}

/*********************************************************/

class Bird: public Creature {
    public:
        //Empty constructor
        Bird();
        void fly() const;
        ~Bird();
    
    private:
        int flight_duration;
};

Bird:: Bird() : flight_duration (6) 
{
    cout << "Empty constructor for Bird is being called." << endl;
}

void Bird:: fly() const 
{
    cout << "Flight over " << flight_duration << " km!" << endl;
}

Bird:: ~Bird() 
{
    cout << "Destructor for Spder is being called." << endl;
}

/********************************************************/

class Penguin: public Creature {
    public:
        Penguin();
        void swim() const;
        ~Penguin();

    private: 
        double swim_time;

};

Penguin:: Penguin()
{
    swim_time =  10;
    cout << "Empty constructor for Penguin is being called." 
    << endl;
}

void Penguin:: swim() const 
{
    cout << "Swimming for " << swim_time << " minutes!" << endl;
}

Penguin:: ~Penguin() 
{
    cout << "Destructor for Penguin is being caled." << endl;
}

/***********************************************************/

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Bird.\n";
    Bird b;
    b.run();
    b.fly();

    cout << "\nCreating a Penguin.\n";
    Penguin p;
    p.run();
    p.swim();

    return 0;
} 