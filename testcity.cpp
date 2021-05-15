/*
CH-230-A
a10_p3.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

int main ()
{
    City bremen, paris, london;
    string name, mayor;
    long int number;
    double area;

    //reading input of instances from keyboard
    cout << "Name of 3 cities: ";
    getline(cin, name);
    bremen.setName(name);
    getline(cin, name);
    paris.setName(name);
    getline(cin, name);
    london.setName(name);

    cout << "Number of inhabitants: ";
    cin >> number;
    bremen.setPop(number);
    cin >> number;
    paris.setPop(number);
    cin >> number;
    london.setPop(number);
    
    cout << "Name of Mayors: ";
    getchar();
    getline(cin, mayor);
    bremen.setMayor(mayor);
    getline(cin, mayor);
    paris.setMayor(mayor);
    getline(cin, mayor);
    london.setMayor(mayor);

    cout << "Area of 3 cities: ";
    cin >> area;
    bremen.setArea(area);
    cin >> area;
    paris.setArea(area);
    cin >> area;
    london.setArea(area);

    //printing
    bremen.print();
    paris.print();
    london.print();

    return 0;

}