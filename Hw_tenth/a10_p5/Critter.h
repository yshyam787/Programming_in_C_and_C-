#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	//storing hunger as a double type which makes 
	//the later conversions easier. 
	double hunger;
	int boredom;
	double height;

public: // business logic methods are public
    Critter(); //Declaring default constructor.
    Critter(std::string); //Constructor with name parameter.
	
    /*constructor with all the parameters. Note that we are taking
	hunger as an int parameter, which will be converted to double later on
	according to our data type. */
    Critter(std::string, int, int, double = 10);

	//setting setters.
	void setName (std:: string newname);
	void setHunger (int newhunger);
	void setBoredom (int newboredom);
	void setHeight (double newheight);

	//setting getters.

	std::string getName();
	int getHunger();
	int getBoredom ();
	int setHeight();

	//for getting double hunger as declared above and coverting
	//it into int easily.
	int getiHunger();

	//converting integer hunger into double. 
	double getdHunger(int);

	void print();
};