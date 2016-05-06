#include <iostream>
#include <string>
#include <cstdlib>

#include "fightClubFunctions.h"

using namespace std;


//WHAT WE NEED:

//menu
void menu(){                                                        //hauptmenü
    cout << "*** MAIN MENU ***" << endl;
    cout << "to create a new fighter press (1)" << endl;
    cout << "to chose the fight mode press (2)" << endl;
    cout << "to list all available fighters press (3)" << endl;
    cout << "to delete a  fighter press (4)" << endl;
}

//createFighter() function
//pick a fighter subclass
//pick a nickname
//store nickname/subclass pair in map

void createFighter(int kind){
    //we need to accomodate 4 different kinds of choices and...
    switch (kind){
        case(1):{                                                //warrior
            Bird * supertux = new Penguin("supertux");
            
        }
        case(2):{                                                //ninja
            
        }
        case(3):{                                                //link
            
        }
        case(4):{                                                //cursed
            
        }
    }

    //store them in a map, with the key being the nickname and the value being the subclass
    
    
    cout << "New " << kind << "created!" << endl;
    

    
    
    
}

//deleteFighter() function
//delete a map item (with deconstructor + ?)



//listFighter() function
//lists all the available fighters in the map with their abilities (abilities are only specials?)



//fight mode:
//1 vs 1:
//pick 2 fighter per nickname and let them fight against each other
//last man standing:
//pick any 2 fighters in the map at random and let all of the fighters fight, until nobody's left
//a fighter CANNOT fight against himself (unique nickname)










