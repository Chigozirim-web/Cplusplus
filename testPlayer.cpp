/*
CH-230-A
a12_p3.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main()
{
    Player P1;
    Player P2("Adams", "Mahmud", "1985-07-22", 15, 35,
    10, "Midfielder", 55, "LF");
    Player P3;

    char name[4][10] = { "Moses", "Chibu", "RF", "Hamburg"};

    P3.setAge(20);
    P3.setFirstN(name[0]);
    P3.setLastN(name[1]);
    P3.setFoot(name[2]);

    Player P4 = P3;

    cout << endl << "PLAYER'S STATS: " << endl;
    P1.print();
    P1.printPlayer();
    cout << endl;

    P2.print();
    P2.printPlayer();
    cout << endl;

    P4.print();
    P4.printPlayer();
    cout << endl;

    //change location
    P1.changeLocation(name[3]);
    P1.print();
    P2.print();
    P4.print();
    cout << endl;

    return 0;
}