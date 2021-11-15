/*
CH-230-A
a11 p1.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

class Box
{
    private:
        double height;
        double width;
        double depth;

    public:
        Box(); //default constructor.
        //parametric constructors
        Box (double, double, double);
        //copy constructor
        Box (const Box&);
        //destructor. 
        ~Box();

        //setter methods. 
        void setHeight (double newheight);
        void setWidth (double newwidth);
        void setDepth (double depth);

        //getter methods.
        double getHeight ();
        double getWidth ();
        double getDepth ();  

        double volume (); 
        //service method.
        void print();   
};