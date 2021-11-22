
class Vector
{
    private:
        int v_size;
        double *elements;
    public:

        void setv_size (int newv_size);
        void setelements (double* newelements);
        int getv_size ();
        double* getelements ();

        void print () const;
        double normality() const;
        Vector addition (const Vector) const;
        Vector differ (const Vector) const;
        double sprod(const Vector) const;
        
        Vector (int, double*);
        Vector();
        Vector (const Vector&);
        ~Vector();
};