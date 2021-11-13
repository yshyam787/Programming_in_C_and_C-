#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
    int age;
    double weight;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setAge(int newage);
    void setWeight(double newweight);
	// getter method
	int getHunger();
    int getBoredom();
    int getHeight();
    int getAge();
    double getWeight();
	// service method
	void print();
};