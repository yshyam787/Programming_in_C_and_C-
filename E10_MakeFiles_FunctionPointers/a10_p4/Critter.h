#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
    Critter(); //Declaring default constructor.
    Critter(std::string); //Constructor with name parameter. 
    //constructor with all the parameters. 
    Critter(std::string, int, int, double = 10);

	void setName (std::string newname);
	void setHunger (int newhunger);
	void setBoredom (int newboredom);
	void setHeight (double newheight);

	std::string getName ();
	int getHunger();
	int getBoredom();
	double getHeight();

	void print();
};