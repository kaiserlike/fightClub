#ifndef FIGHTER_H_INCLUDED
#define FIGHTER_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class fighter {
    public:
        fighter(string name);
        void turn(string name);

    protected:
        string nickname;
        int lifePoints = 100;
        int defensePoints, offensePoints, hitPoints;

};

class warrior : public fighter {
    public:
        warrior(string name);

    private:
        void warriorSpecial();
};

class ninja : public fighter {
    public:
        ninja(string name);
    private:
        int ninjaSpecial();
};

class link : public fighter {
    public:
        link(string name);
    private:
        int linkSpecial();
};

class zombie : public fighter {
    public:
        zombie(string name);
    private:
        int unDead();
};

#endif // FIGHTER_H_INCLUDED
