/*
CH-230-A
a13_p8.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

//create classes
class Motor
{
    public:     //cast to type string
    Motor()  {throw (string) "This motor has problems.\n";}
    ~Motor() { }
};

class Car
{
    public:
    Car() { Motor();}
    ~Car() {   }
};

class Garage
{
    public:
    Garage()
    {
        try
        {
            Car c;
        }
        catch(string e)
        {
            cerr << e << endl;
            throw (string) "The car in this garage has problems with the motor\n";
        }
    }
    ~Garage() { }
};


int main()
{
    try
    {
        Garage g;
    }
    catch(string &e)
    {
        std::cerr << e << '\n';
    }
    
    return 0;
}