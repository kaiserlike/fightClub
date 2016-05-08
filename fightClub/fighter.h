#ifndef FIGHTER_H_INCLUDED
#define FIGHTER_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Fighter {
    public:
        Fighter(string name);
        void turn(string name);
        int lifePoints = 100;
        virtual ~Fighter(){};
        int getHP();
        int getDP();
        int getOP();
        virtual string getSpecial(){
            return "No specials";
        };
    

    protected:
        string nickname;
        int defensePoints, offensePoints;
        int hitPoints = 0;

};

class Warrior : public Fighter {
    public:
        Warrior(string name);
        string getSpecial();
    private:
        void warriorSpecial();
};

class Ninja : public Fighter {
    public:
        Ninja(string name);
        string getSpecial();
    private:
        void ninjaSpecial();
};

class Link : public Fighter {
    public:
        Link(string name);
        string getSpecial();
    private:
        void linkSpecial();
};

class Cursed : public Fighter {
    public:
        Cursed(string name);
        string getSpecial();
    private:
        bool unDead(int hP);
};



#endif // FIGHTER_H_INCLUDED
