#include <iostream>
#include "City.h"

using namespace std;

void City::setName(string& newname)
{ name = newname;}

void City::setPop(long int newpop)
{ pop = newpop;}

void City::setMayor(string& newmayor)
{ mayor = newmayor;}

void City::setArea(double newarea)
{ area = newarea;}

//getter methods
string& City::getName()   {return name;}
long int City::getPop()   {return pop;}
string& City::getMayor()  {return mayor;}
double City::getArea()    {return area;}

void City::print()
{
    cout << "The city is " << name << ". It has " <<
    pop << " inhabitants. Its mayor is " << mayor 
    << ", and it has an area of " << area << " km2. \n";
}