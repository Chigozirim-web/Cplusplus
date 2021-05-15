#include <iostream>
#include "Creature.h"

using namespace std;

//methods for class Creature
Creature::Creature(): distance(10)
{
    cout << "Calling Creature's constructor" << endl;
}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Creature::~Creature()
{
    cout << "Calling Creature's destructor" << endl;
}


//define methods for class Werewolf
Werewolf::Werewolf() : strength(50)  
{
    cout << "Calling Werewolf's empty constructor" << endl;
}

Werewolf::Werewolf(int stren)
{
    strength = stren;
    cout << "Calling Werewolf's first constructor" << endl;
}

Werewolf::~Werewolf()
{
    cout << "Calling Werewolf's destructor" << endl;
}

void Werewolf::power() const
{
    cout << "Posseses power of " << strength*distance 
    << " horsepower!\n";
}



//define methods for class Vampire
Vampire::Vampire() : thirst(50)
{
    cout << "Calling Vampire's empty constructor" << endl;
}

Vampire::Vampire(int t) : thirst(t)
{
    cout << "Calling Vampire's 2nd constructor" << endl;
}

Vampire::Vampire(int d, int t) 
{
//distance can be directly accessed here because it is in
//protected form in class Creature, so it can
//be accessed by child members, but not outside it though
    distance = d;
    thirst = t;
    cout << "Calling Vampire's 3rd constructor" << endl;
}

Vampire::~Vampire()
{
    cout << "Calling Vampire's destructor" << endl;
}

void Vampire::info() const
{
    cout << "Vampire has " << thirst << " percent thirst for" 
    << " blood for journey of " << distance << " meters!\n";
}

//define methods for Wizard class
Wizard::Wizard() : distFactor(3)
{
    cout << "Calling Wizard's constructor" << endl;
}  

Wizard::~Wizard()
{
    cout << "Calling Wizard's destructor" << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
