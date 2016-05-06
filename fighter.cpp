#include "fighter.h"

fighter::fighter(string name){      //constructor fighter
    nickname = name;

    defensePoints = rand() % 26 + 25;       // random number between 25 an 50
    offensePoints = rand() % 26 + 25;       // random number between 25 an 50
}


//SUBCLASS WARRIOR

warrior::warrior(string name) : fighter(name){};    //constructor warrior

void warrior::warriorSpecial(){
    int rng = rand() % 6;
    if(rng == 5){
        hitPoints = hitPoints * 2;
    }
}



//SUBCLASS NINJA

ninja::ninja(string name) : fighter(name){};        //constructor ninja

void ninja::ninjaSpecial(){
    int evade = rand() %6;
    if (evade == 0){
        //Gegner trifft nicht
    }
}




//SUBCLASS LINK

link::link(string name) : fighter(name){};        //constructor link









//SUBCLASS ZOMBIE

cursed::cursed(string name) : fighter(name){
    
}       //constructor zombie

bool cursed::unDead(hitPoints){
    if(cursed->hitPoints <= 0){
        //turns into a ZOMBIE
        //gets new hitpoints
        //gets new attack
        //gets new defense
        //does not get a counterattack because he's too slow
        //MAYBE gets deadly bite, 1 in  10 chance of infecting other fighter with cursed
        
    }

}





