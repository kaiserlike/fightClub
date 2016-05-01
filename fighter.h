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

#endif // FIGHTER_H_INCLUDED
