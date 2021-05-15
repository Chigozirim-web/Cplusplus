/*
CH-230-A
a10_p4.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

int main ()
{
    Critter one;
    Critter two("Sam");
    Critter three("Neon", 2, 100, 76.5);
    Critter four("Trex", 2, 77);
    Critter five("Dre", 7, 55, 22.55, 5.5);

    //setting hunger levels to 2
    one.setHunger(2);
    two.setHunger(2);

    one.print();
    two.print();
    three.print();
    four.print();
    five.print();

    return 0;
}