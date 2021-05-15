#include "Critter.h"
#include <iostream>

using namespace std;

//comversion to double
double Critter::change_hunger(int &h)   { return h*0.1 ;}

//back to int
int Critter::change_hunger() { return hunger *10;}


Critter::Critter()
{
    name = "default_critter";
    height = 5;
    //thirst same as hunger
    hunger = thirst = 0; 
    boredom = 0;
    cout << "Default constructor is being called.\n";
}

Critter::Critter(string newname) : name(newname)
{
    height = 5;
    hunger = thirst = 0;
    boredom = 0;
    cout << "2nd Constructor is being called.\n";
}

Critter::Critter(string newname, int hun, 
int b, double hei)
{
    name = newname;
    //hunger is stored internally as double type
    hunger = change_hunger(hun); 
    boredom = b;
    height = hei;
    //thirst same as hunger
    thirst = hunger;
    cout << "3rd Constructor is being called.\n";
}

Critter::Critter(std::string newname, int hun, int b,
double hei, double th) : name(newname)
{
    hunger = change_hunger(hun); 
    boredom = b;
    height = hei;
    thirst = th;
    cout << "4th constructor is being called." << endl;
}

//getter
double Critter::getHunger() 
{ return change_hunger();}

//setter method for hunger
void Critter::setHunger(int newhunger)
{
    //hunger is stored internally as double type
    hunger = change_hunger(newhunger);
}

//other setters
void Critter::setName(string &newname)
{ name = newname;}


void Critter::setBoredom(int newboredom)
{ boredom = newboredom;}


void Critter::setHeight(double newheight)
{ height = newheight;}

void Critter::setThirst(double th)
{ thirst = th;}

void Critter::print()
{
    //hunger is printed as an int
	cout << "I am " << name << ". My hunger level is " << 
    change_hunger() << ". My boredom level is " << boredom 
    << ". " <<"My height is " << height << ", and my thirst level is "
    << thirst << "." << endl;
}