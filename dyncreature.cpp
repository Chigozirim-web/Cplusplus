/*
CH-230-A
a11_p4.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
#include <string>

using namespace std;

int main ()
{
    string word;
    
    while(1)
    {
        cout << "Enter a word: " << endl;
        getline(cin, word);

        if(word.compare("wizard") == 0)
        {
            Wizard *w = new Wizard;
            w->run();
            w->hover();
            cout << endl;
            delete w;
            cout << endl;
        }

        else if(word.compare("werewolf") == 0)
        {
            Werewolf *we = new Werewolf;
            we->run();
            we->power();
            cout << endl;
            delete we;
            cout << endl;
        }

        else if(word.compare("vampire") == 0)
        {
            Vampire *v = new Vampire;
            v->run();
            v->info();
            cout << endl;
            delete v;
            cout << endl;
        }

        else if(word.compare("quit") == 0)
            return 0;

        else
        {
            continue;
        }
    }

    return 0;
}