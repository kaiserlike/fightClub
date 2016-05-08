#include "fighter.h"

Fighter::Fighter(string name){      //constructor fighter
    nickname = name;

    defensePoints = rand() % 26 + 25;       // random number between 25 an 50
    offensePoints = rand() % 26 + 25;       // random number between 25 an 50
}

int Fighter::getHP(){
    return hitPoints;
}
int Fighter::getDP(){
    return defensePoints;
}
int Fighter::getOP(){
    return offensePoints;
}


//SUBCLASS WARRIOR

Warrior::Warrior(string name) : Fighter(name){};    //constructor warrior

void Warrior::warriorSpecial(){
    int rng = rand() % 6;
    if(rng == 5){
        hitPoints = hitPoints * 2;
    }
}

string Warrior::getSpecial(){
    return "1 in 6 chance of attacking twice as powerful.";
}



//SUBCLASS NINJA

Ninja::Ninja(string name) : Fighter(name){};        //constructor ninja

void Ninja::ninjaSpecial(){
    int evade = rand() % 6;
    if (evade == 0){
        //Gegner trifft nicht
    }
}

string Ninja::getSpecial(){
    return "1 in 6 chance of evading an attack while still defending.";
}



//SUBCLASS LINK

Link::Link(string name) : Fighter(name){};        //constructor link

string Link::getSpecial(){
    return "1 in ? chance of getting healed by a fairy.";
}







//SUBCLASS ZOMBIE

Cursed::Cursed(string name) : Fighter(name){
    
}       //constructor zombie

bool Cursed::unDead(int damage){
    if(lifePoints - damage<= 0){
        //turns into a ZOMBIE
        //gets new hitPoints
        //gets new offencsePoints
        //gets new defensePoints
        //does not get a counterattack because he's too slow
        //MAYBE gets deadly bite, 1 in  10 chance of infecting other fighter with cursed
        return true;
        
    }else{
        return false;
    }

}

string Cursed::getSpecial(){
    return "Turns into an undead Fighter when killed.";
}


/*class Bird { ... virtual ~Bird(); };
Penguin * tux = new Penguin("tux");
Bird * supertux = new Penguin("supertux");
delete tux;
// Output:
//penguin dies
//bird dies
delete supertux;
// Output:
//penguin dies
//bird dies */





