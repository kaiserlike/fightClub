#include "fighter.h"

fighter::fighter(string name){      //constructor fighter
    nickname = name;

    defensePoints = rand() % 26 + 25;       // random number between 25 an 50
    offensePoints = rand() % 26 + 25;       // random number between 25 an 50
}

warrior::warrior(string name) : fighter(name){};    //constructor warrior

ninja::ninja(string name) : fighter(name){};        //constructor ninja

link::link(string name) : fighter(name){};        //constructor link

void warrior::warriorSpecial(){
   int rng = rand() % 6;
   if(rng == 5){
        hitPoints = hitPoints * 2;
   }
}

void fighter::turn(string name){

}


