#include <iostream>
#include <string>
#include <cstdlib>
#include <map>


#include "fightClubFunctions.h"
#include "fighter.h"


using namespace std;


//WHAT WE NEED:


//createFighter() function
    //pick a fighter subclass
    //pick a nickname
    //store nickname/subclass pair in map

void createFighter(string nickname){
    int choice = 0;
    map<string, Fighter*> fightClub;
    
    //we need to accomodate 4 different kinds of choices and...
    cout << "*** CREATE FIGHTER ***" << endl;
    cout << "to create a new warrior press (1)" << endl;
    cout << "to create a new ninja press (2)" << endl;
    cout << "to create a new link press (3)" << endl;
    cout << "to creat a new cursed press (4)" << endl;
    
    cin >> choice;
    
    switch (choice){
        case '1':{                                                //warrior
            
            Fighter * warriorP = new Warrior(nickname);
            //safe the new warrior in map
            fightClub[nickname] = warriorP;
            cout << "New Warrior "<< nickname << " created!" << endl;
            break;
        }
        case '2':{                                                //ninja
            Fighter * ninjaP = new Ninja(nickname);
            //safe the new ninja in map
            fightClub[nickname] = ninjaP;
            cout << "New Ninja "<< nickname << " created!" << endl;
            break;
        }
        case '3':{                                                //link
            Fighter * linkP = new Link(nickname);
            //safe the new link in map
            fightClub[nickname] = linkP;
            cout << "New Link "<< nickname << " created!" << endl;
            break;
        }
        case '4':{                                                //cursed
            Fighter * cursedP = new Cursed(nickname);
            //safe the new cursed in map
            fightClub[nickname] = cursedP;
            cout << "New Cursed "<< nickname << " created!" << endl;
            break;
        }
    }
    
    


    //store them in a map, with the key being the nickname and the value being the subclass
    /*int main ()
    {
        // the next line creates a mapping from strings to strings
        map<string,string> car;
        
        car["Smith"]="Ford";
        car["Jones"]="Jaguar";
        
        cout << "Smith's car is a " << car["Smith"] << endl;
        cout << "Jones' car is a " << car["Jones"] << endl;
    }*/
    
    
    

    
    
    
}

//deleteFighter() function
//delete a map item (with deconstructor + ?)
void deleteFighter(string nickname){
    
}


//listFighter() function
//lists all the available fighters in the map with their abilities (abilities are only specials?)
void listFighters(){
    
}


//fight mode:
//1 vs 1:
//pick 2 fighter per nickname and let them fight against each other
//last man standing:
//pick any 2 fighters in the map at random and let all of the fighters fight, until nobody's left
//a fighter CANNOT fight against himself (unique nickname)


    //menu
    void menu(){                                                        //hauptmenü
        int input = 0;
        
        cout << "*** MAIN MENU ***" << endl;
        cout << "to create a new fighter press (1)" << endl;
        cout << "to chose the fight mode press (2)" << endl;
        cout << "to list all available fighters press (3)" << endl;
        cout << "to delete an exesting fighter press (4)" << endl;
        
        cin >> input;
        while(input > 0 && input < 5)
            switch (input){
                case(1):{
                    string nName;
                    cout << "Please pick a nickname for the new fighter:" << endl;
                    cin >> nName;
                    createFighter(nName);
                }
                case(2):{                                                //fight mode
                    //fight mode: 1v1 or deathmatch
                }
                case(3):{                                                //list
                    listFighters();
                }
                case(4):{                                                //delete
                    string nName;
                    cout << "Please enter the nickname for the fighter you would like to whipe out:" << endl;
                    cin >> nName;
                    deleteFighter(nName);
                }
                    
            }
    }








