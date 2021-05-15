/*
CH-230-A
a9_p9.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    string words[] = {"computer", "television", "keyboard",
    "laptop", "mouse", "cooperate", "endure", "election",
    "penchant", "louis", "relation", "deliver",
    "holdeth", "fourteen", "number", "aesthetic", "dread"};

    string guess;
    int tries = 0;

    cout << "Welcome to the guessing game\n";
    
    do
    {
        //random number selection to be used as 
        //index of array words[] for a random word
        srand((unsigned int) (time(NULL)));
        int i = rand() % 17;

        string word = words[i];
        int length = word.size();
        for(int j = 0; j < length; j++)
        {
            if(word[j] == 'a' || word[j] == 'e' 
            || word[j] == 'i' || word[j] == 'o' 
            || word[j] == 'u' || word[j] == 'A'
            ||word[j] == 'E'  || word[j] == 'I' 
            || word[j] == 'O' || word[j] == 'U')
                cout << "_";

            else
                cout << word[j];
        }
        cout << endl;

        while(1)
        {
            tries++;
            cout<< "Try number " << tries << ": " << endl;

            //getting guess input from the user
            cout << "Type in your guess word\n";
            getline(cin, guess);
            cout << endl;

            //if user inputs "quit" as a guess, end program
            if (guess.compare("quit") == 0)
                return 0;

            //if guess is correct, do this
            else if(word.compare(guess) == 0)
            {
                cout << "Congratulations! You won after " << tries << 
                " tries. Would you like to play again?\n" 
                << "Yes/No\n";
                
                cin >> guess;
                getchar();

                if(guess.compare("No") == 0)
                    return 0;
                else
                {
                    tries = 0;
                    break;  
                } 
            }

            //else, try guessing again
            else
            {
                cout << "Wrong guess. Try again\n";
                continue;
            }
        }
    }
    //do-while loop runs until "quit" is entered as input
    while(guess.compare("quit") != 0);

    return 0;
}


