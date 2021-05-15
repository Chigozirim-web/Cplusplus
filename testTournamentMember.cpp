/*
CH-230-A
a12_p2.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

using namespace std;

int main()
{
    //TEST PROGRAM
    
    char fname[] = "New";
    char lname[] = "guy";
    char date[] = "1995-12-01";
    char place[] ="Madrid";

    TournamentMember T1;
    TournamentMember T2("Ousmane", "Dembélé", "1997-05-15", 5, 23);
    TournamentMember *T3 = new TournamentMember;

    T3->setFirstN(fname);
    T3->setLastN(lname);
    T3->setDOB(date);
    T3->setAge(25);

    TournamentMember T4 = *T3;

    cout << "STATS:" << endl;
    cout << "first member: \n";
    T1.print();
    cout << "second member: \n";
    T2.print();
    cout << "third member: \n";
    T4.print();

    //changing one changes all, since location is a static member
    T2.changeLocation(place);

    cout << "STATS AFTER CITY CHANGE:" << endl;
    cout << "first member: \n";
    T1.print();
    cout << "second member: \n";
    T2.print();
    cout << "third member: \n";
    T4.print();

    //deallocate dynamic memory
    delete T3;

    return 0;

}