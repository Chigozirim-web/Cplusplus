#include <iostream>
#include <cmath>    //for pow() and sqrt()
#include "Vector.h"

using namespace std;
int i;

Vector::Vector()
{   //default constructor
    cout << "calling default constructor\n";
    size = 0;
    Comp = new double[size];
}

Vector::Vector(int s, double* vec)
{
    cout << "calling first constructor\n";
    size = s;
    Comp = new double [size];
    //setting the components of the vector
    for(i = 0; i < size; i++)
        Comp[i] = vec[i];
}

Vector::Vector(const Vector &vec)
{
    cout << "calling copy constructor\n";
    size = vec.size;
    Comp = new double [size];
    for(i = 0; i < size; i++)
        Comp[i] = vec.Comp[i];
} 

Vector::~Vector()
{
    cout << "calling destructor\n";
    delete[] Comp;
}

void Vector::setSize(int s)
{   size = s;}

void Vector::setV(double *vec)
{   
    size = sizeof(vec);
    for(i = 0; i < size; i++)
        Comp[i] = vec[i];
}

int Vector::getSize()
{   return size;}

double* Vector::getV()
{   return Comp;}

void Vector::printVector() const
{
    cout << "\nVector: ";
    for(i = 0; i < size; i++)
        cout << Comp[i] << " ";
    
    cout << endl;
}

double Vector::norm() const
{
    double sum = 0.0;

    for(i = 0; i < size; i++)
    {
        sum += pow(Comp[i], 2.0);
    }
    return sqrt(sum);
}

Vector Vector::add(const Vector V) const
{
    cout << "\nsumming two vectors... \n";
    Vector vec;

    if(size != V.size)
    {
        cout << "\ndifferent sizes, therefore " 
        << "cannot add both vectors\n";
        return vec;
    }
    else
    {
        vec.size = size;
        for(i = 0; i < vec.size; i++)
            vec.Comp[i] = Comp[i] + V.Comp[i];
        
        return vec;
    }  
}

Vector Vector::difference(const Vector V) const
{
    cout << "\nsubtracting two vectors... \n";
    Vector vec;

    if(size != V.size)
    {
        cout << "\ndifferent sizes, therefore" 
        << " cannot be subtracted\n";
        return vec;
    }
    else
    {
        vec.size = size;
        for(i = 0; i < vec.size; i++)
            vec.Comp[i] = Comp[i] - V.Comp[i];
        
        return vec;
    }   
}

double Vector::scalarProd(const Vector V) const
{
    cout << "\nscalar products of 2 vectors... \n";
    double d = 0;

    if(size != V.size)
    {
        cout << "\ndifferent sizes, therefore" 
        << " cannot be subtracted\n";
        return -1.0;
    }
    else
    {
        for(i = 0; i < size; i++)
            d += (Comp[i] * V.Comp[i]);

        return d;
    }
}
