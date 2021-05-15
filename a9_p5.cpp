/*
CH-230-A
a9_p5.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string name;
    cout << "Welcome to the guessing game!" << endl;
    cout << "Please type in your name: " << endl;
    getline(cin, name);

    //generate random number
    int num, randomNum, guess, tries = 0;

    srand(static_cast <unsigned int> (time(0)));
    num = rand();
    randomNum = (num % 100) + 1;

    while(1)
    {         
        tries++;
        cout << "Try " << tries << " :";
        cout << "Enter a number to guess between 1 and 100: " ;
        cin >> guess;

        if(guess == randomNum)
        {
            cout << "Congratulations " << name <<
            "! You guessed the number correctly." << endl;
            break;
        }

        else if(guess < randomNum)
            cout << "Too low " << name << 
            ", try again." << endl;

        else
        {
            cout << "Too high " << name <<
             ", try again." << endl;
        }
    }

    return 0;
}