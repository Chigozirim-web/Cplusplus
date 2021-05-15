#ifndef CRITTER_H
#define CRITTER_H

#include <string>

//using namespace std;

class Critter
{
private:
    std::string name;
    double hunger;
    int boredom;
    double height;
    double thirst;

    //private methods
    
    double change_hunger(int &h);
    int change_hunger();

public:
    Critter();  //empty constructor
    Critter(std::string);
    //default height if height is not given as a parameter
    Critter(std::string, int, int, double = 10);
    Critter(std::string, int, int, double, double);

    //setters
    void setName(std::string &newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    void setThirst(double th);

    //getters
    double getHunger();

    //service method
    void print();
};
#endif