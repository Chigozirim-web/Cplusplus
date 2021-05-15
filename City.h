#ifndef CITY_H
#define CITY_H

#include <string>
using namespace std;

class City
{
    private:
    string name;
    long int pop; //for population
    string mayor;
    double area;

    public:
    //setter methods
    void setName(string& newname);
    void setPop(long int newpop);
    void setMayor(string& newmayor);
    void setArea(double newarea);

    //getter methods
    string& getName();
    long int getPop();
    string& getMayor();
    double getArea();

    void print();
};
#endif