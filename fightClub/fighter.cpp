#include "fighter.h"

Fighter::Fighter(string name){      //constructor fighter
    nickname = name;

    defensePoints = rand() % 26 + 25;       // random number between 25 an 50
    offensePoints = rand() % 26 + 25;       // random number between 25 an 50
}


//SUBCLASS WARRIOR

Warrior::Warrior(string name) : Fighter(name){};    //constructor warrior

void Warrior::warriorSpecial(){
    int rng = rand() % 6;
    if(rng == 5){
        hitPoints = hitPoints * 2;
    }
}



//SUBCLASS NINJA

Ninja::Ninja(string name) : Fighter(name){};        //constructor ninja

void Ninja::ninjaSpecial(){
    int evade = rand() % 6;
    if (evade == 0){
        //Gegner trifft nicht
    }
}




//SUBCLASS LINK

Link::Link(string name) : Fighter(name){};        //constructor link









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





