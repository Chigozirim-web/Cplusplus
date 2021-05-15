#include <iostream>
#include "Box.h"

using namespace std;

//methods definition

Box:: Box() {height = width = depth = 0;}

Box:: Box(double h, double w, double d)
{
    height = h;
    width = w;
    depth = d;
}

//copy constructor
Box::Box(const Box &box)
{
    cout << "Copy constructor is being called\n";
    height = box.height;
    width = box.width;
    depth = box.depth;
}

//destructor
Box::~Box() 
{
    cout << "Calling the destructor" << endl;
} 

//setters
void Box::setHeight(double h)
{ height = h;}

void Box::setWidth(double w)
{ width = w;}

void Box::setDepth(double d)
{ depth = d;}

//getters
double Box::getHeight()     {return height;}
double Box::getWidth()      {return width;}
double Box::getDepth()      {return depth;}

//calculation
double Box::volume()
{ return (height * width * depth);}