// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

//copy constructor Shape
Shape::Shape(const Shape &S)
{
    cout << "calling Shape's copy constructor\n";
    name = S.name;
}
Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

void Shape::setName(string n)
{   name = n;}

string Shape::getName()
{   return name;}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//copy constructor CenteredShape
CenteredShape::CenteredShape(const CenteredShape &Cs)
:Shape(Cs)
{
    cout << "calling CenteredShape's copy constructor\n";
    x = Cs.x;
    y = Cs.y;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

//copy constructor RegularPolygon
RegularPolygon::RegularPolygon(const RegularPolygon &Rp)
:CenteredShape(Rp)
{
    cout << "calling RegularPolygon's copy constructor\n";
    EdgesNumber = Rp.EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

/**************************
 * CLASS HEXAGON
 * ***********************/

Hexagon::Hexagon(const string &n, double nx, double ny, int e, 
double s, const string &c) : RegularPolygon(n, nx,ny, 6) //6 for hexagon
{
    side = s;
    color = c;
}

//copy constructor for class Hexagon
Hexagon::Hexagon(const Hexagon &He) : RegularPolygon(He)
{
    cout << "Calling hexagon's copy constructor\n";
    side = He.side;
    color = He.color;
}

Hexagon::~Hexagon()
{
    cout << "Calling hexagon's destructor\n";
}

//methods
double Hexagon::perimieter()
{ return (6*side); }

double Hexagon::area()
{   return ((side*side) * (3*sqrt(3)/2.0)); }

//getters and setters
void Hexagon::setSide(double s)
{   side = s;}

void Hexagon::setColor(string c)
{   color = c;}

double Hexagon::getSide()
{   return side;}

string Hexagon::getColor()
{   return color;}