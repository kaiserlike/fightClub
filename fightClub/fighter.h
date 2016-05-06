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
        //virtual ~Fighter();

    protected:
        string nickname;
        int defensePoints, offensePoints, hitPoints;

};

class Warrior : public Fighter {
    public:
        Warrior(string name);

    private:
        void warriorSpecial();
};

class Ninja : public Fighter {
    public:
        Ninja(string name);
    private:
        void ninjaSpecial();
};

class Link : public Fighter {
    public:
        Link(string name);
    private:
        void linkSpecial();
};

class Cursed : public Fighter {
    public:
        Cursed(string name);
    private:
        bool unDead(int hP);
};



#endif // FIGHTER_H_INCLUDED
