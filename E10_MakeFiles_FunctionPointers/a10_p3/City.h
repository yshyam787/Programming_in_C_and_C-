#include <string>

class City
{
    private:
        std:: string name;
        int numofinhab;
        std:: string mayor;
        double area;
    
    public:
        //setter methods.
        void setName (std:: string &newname);
        void setNumofinhab (int newNumofinhab);
        void setMayor (std:: string &newmayor);
        void setArea (double newarea);

        //getter methods.
        std:: string getName();
        int getNumofinhab();
        std:: string getMayor();
        double getArea();

        void print();

};