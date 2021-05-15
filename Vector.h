/**************************
 * VECTOR CLASS DEFINITION
 * ************************/

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
    private:
        int size;
        double *Comp; //components of vector
    public:
        Vector();  //default constructor
        Vector(int, double*);
        Vector(const Vector&); //copy constructor
        ~Vector();  //destructor

        //setters
        void setSize(int s);
        void setV(double *vec);
        //getters
        int getSize();
        double *getV();

        //methods
        void printVector() const;
        double norm() const;
        Vector add(const Vector) const;
        Vector difference(const Vector) const;
        //scalar product of 2 vectors return a single number
        //and not another vector
        double scalarProd(const Vector) const;
};

#endif