
/*
CH-230-A
a11 p6.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/

class Vector
{
    private:
        int size;
        //pointer to the memory location where the components of the
        //vector are stored. 
        double *ptr;
    public:
        Vector();
        Vector (double, double*);
        Vector (const Vector&);
        ~Vector();

        void setSize (int newsize);
        void setPtr (double* newptr);
        int getSize ();
        double* getPtr ();

        void printv () const;
        double norm() const;
        double scalarprod(const Vector) const;
        Vector add (const Vector) const;
        Vector difference (const Vector) const;
};