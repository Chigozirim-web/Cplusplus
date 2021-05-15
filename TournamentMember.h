
#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

#include <cstring>

class TournamentMember
{
    private:
        char firstName[36];
        char lastName[37];
        char DoB[11];   //DateofBirth in form yyyy-mm-dd
        static char location[36];
        //2 new properties
        double experience; //in years
        int age;
    
    public:
    TournamentMember(); //empty constructor
    TournamentMember(const char*, const char*, const char*,
    double, int);
    TournamentMember(const TournamentMember &);
    ~TournamentMember();

    //methods
    void print() const;
    static void changeLocation(char*);

    //inline methods
    //setters
    //explicitly set as inline (somewhat redundant but works)
    inline void setFirstN(char *fname) {strcpy(firstName, fname);} 
    inline void setLastN(char *lname)  {strcpy(lastName, lname);}
    inline void setDOB(char *dob)      {strcpy(DoB, dob);}
    //automatically inline
    void setExperience(double e)  {experience = e;}
    void setAge(int a) {age = a;}

    //getters
    //automatically inline
    char* getFirstN() {return firstName;}
    char* getLastN()  {return lastName;}
    char* getDOB()  {return DoB;}
    double getExperience()  {return experience;}
    int getAge()    {return age;}

};

/*****************************
 * DERIVED CLASS PLAYER
 * **************************/
class Player : public TournamentMember
{
    private:
        int number;
        //positions: Goalkeeper, Defender, Midfielder, Striker
        char position[15];
        int goals;
        //used_foot: LF or RF
        char used_foot[15];

    public:
        //inline setters and getters
        void setNumber(int num) {number = num;}
        void setPosition(char *pos) {strcpy(position, pos);}
        void setFoot(char *f)   {strcpy(used_foot, f);}

        int getNumber() {return number;}
        char* getPosition() {return position;}
        int getGoals()  {return goals;}
        char* getFoot() {return used_foot;}

        //constructors
        Player();
        Player(const char*, const char*, const char*,
        double, int, int, const char*, int, const char*);
        Player(const Player&);
        ~Player();

        //method
        void increase(int n);    //increase number of goals scored
        void printPlayer();
};

#endif