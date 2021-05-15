#include <iostream>
#include "Creature.h"

using namespace std;

int main ()
{
    
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating 2 Werewolves.\n";
    //2nd instance just to test 2nd constructor
    Werewolf we, we2(65); 
    we.run();
    we.power();

    cout << "\nCreating 3 Vampires.\n";
    //last 2 objects to test 2nd and 3rd constructor
    Vampire v, v2(90), v3(15, 67);
    v3.run();
    v3.info();

    cout << endl;

    return 0;
}