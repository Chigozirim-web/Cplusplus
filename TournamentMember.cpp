#include <iostream>
#include "TournamentMember.h"
#include <cstring>

using namespace std;

char TournamentMember::location[36] = "Barcelona";

TournamentMember::TournamentMember() 
{
    cout << "Calling Parent default constructor\n";
    strcpy(firstName,"default");
    strcpy(lastName, "name_");
    strcpy(DoB, "0000-00-00");
    experience = 0;   
    age = 0;
}

TournamentMember::TournamentMember(const char *fname, const char *lname, 
const char *dob, double exper, int a)
{
    cout << "Calling Parent parametric constructor\n";
    strcpy(firstName,fname);
    strcpy(lastName,lname);
    strcpy(DoB,dob);
    experience = exper;
    age = a;
}

TournamentMember::TournamentMember(const TournamentMember &TM)
{
    cout << "Calling Parent copy constructor\n";
    strcpy(firstName, TM.firstName);
    strcpy(lastName, TM.lastName);
    strcpy(DoB, TM.DoB);
    this->experience = TM.experience;
    this->age = TM.age;
}

TournamentMember::~TournamentMember()
{
    cout << "Calling Parent destructor\n";
}

//methods
void TournamentMember::print() const
{
    cout << "Tournament Member is " << firstName << " " << lastName
    << ", was born in " << DoB << ". Member has " << experience 
    << " years experience, and is " << age << " years old. " <<
    "Member is located in " << location << ". \n";
}

void TournamentMember::changeLocation(char* newL)
{
    strcpy(location, newL);
}


/**********************************
 * DERIVED CLASS PLAYER
 * *******************************/

Player::Player()
{
    cout << "Calling Player's default constructor\n";
    number = 0;
    strcpy(position, "UNDECIDED");
    goals = 0;
    strcpy(used_foot, "UNKNOWN");
}

Player::Player(const char *fname, const char* lname, const char *d,
double ex, int a, int num, const char* pos, int goal, const char* foot)
: TournamentMember(fname, lname, d, ex, a)
{
    cout << "Calling Player's parametric constructor\n";
    number = num;
    strcpy(position, pos);
    goals = goal;
    strcpy(used_foot, foot);
}

Player::Player(const Player &Pl) : TournamentMember(Pl)
{
    cout << "Calling Player's copy constructor\n";
    number = Pl.number;
    strcpy(position, Pl.position);
    goals = Pl.goals;
    strcpy(used_foot, Pl.used_foot);
}

Player::~Player()
{
    cout << "Calling Player's destructor\n";
}

void Player::increase(int n)
{
    goals =+ n;
}

void Player::printPlayer()
{
    if(strcmp(used_foot, "LF") == 0)
    {
        cout << "Player: " << getFirstN() << " " << getLastN()
        << " plays number " << number << " as a/an " << position
        << ". Player is left-footed, and has scored total of "
        << goals << " goals.\n";
    }
    else if(strcmp(used_foot, "RF") == 0)
    {
        cout << "Player: " << getFirstN() << " " << getLastN()
        << " plays number " << number << " as a/an " << position
        << ". Player is right-footed, and has scored total of "
        << goals << " goals.\n";
    }
    else
    {
        cout << "Player: " << getFirstN() << " " << getLastN()
        << " plays number " << number << " as a/an " << position
        << ". Player's dominant foot is " << used_foot << 
        ", and has scored total of " << goals << " goals.\n"; 
    }
}