#ifndef CREATURE_H
#define CREATURE_H

/**************************
 * Class declaration
 * (base and derived classes)
 *************************/

//BASE CLASS
class Creature 
{
	public:
		Creature();
        ~Creature();  
		void run() const;

	protected:
		int distance;
};

//DERIVED CLASSES (3)

/********************************
* Derived class "Werewolf"
********************************/
class Werewolf : public Creature
{
    public:
        Werewolf(); //strength to 50
        Werewolf(int);
        ~Werewolf();
        void power() const;

    private:
        int strength; //in percent
};


/******************************
* Derived class "Vampire"
******************************/
class Vampire : public Creature
{
    public:
        Vampire(); //empty- thirst = 50
        Vampire(int); //for thirst
        Vampire(int, int); //thirst and distance
        ~Vampire();
        void info() const;

    private:
        int thirst; //in percent

};

/******************************
* Derived class "Wizard"
******************************/

class Wizard : public Creature 
{
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

#endif