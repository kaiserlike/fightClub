#include <iostream>
#include <string>
#include <cstdlib>
#include <map>


#include "fightClubFunctions.h"
#include "fighter.h"


using namespace std;

//MAP, wo die erstellten Fighter gespeichert werden
map<string, Fighter*> fightClub;


string createNickName(){                                      //to avoid repetition of code
    string nName;
    cout << "Please pick a nickname for the new Fighter:" << endl;
    cin >> nName;
    while(fightClub.find(nName) != fightClub.end()){
        cout << "This nickname is already taken. Please pick another nickname for the new Fighter:" << endl;
        cin >> nName;
    }
    return nName;
}
string deleteNickName(){
    string nName;
    cout << "Please enter the nickname for the Fighter you would like to wipe out:" << endl;
    cin >> nName;
    return nName;
}

void returnToMM(){                                      //to avoid repetition of code
    int returnToMenu = 0;
    cout << "To return to the main menu, press (0)" << endl;
    cin >> returnToMenu;
    switch (returnToMenu) {
        default:{
            menu();
        }
    }
}

//createFighter() function
    //pick a fighter subclass
    //pick a nickname
    //store nickname/subclass pair in map

void createFighter(string nickname){
    //debugging: cout << "The nickname you chose is " << nickname << endl;
    unsigned int choice = 0;
    
    // CREATE FIGHTER submenu
    cout << "*** CREATE FIGHTER ***" << endl;
    cout << "To create a new Warrior, press (1)" << endl;
    cout << "To create a new Ninja, press (2)" << endl;
    cout << "To create a new Link, press (3)" << endl;
    cout << "To create a new Cursed One, press (4)" << endl;
    cout << "To return to main menu press (0)" << endl;
    cin >> choice;
    //debugging: cout << "The choice you made is " << choice << endl;
    
    switch (choice){
        case 1:{                                                //warrior
            //create new Warrior and insert it into the map with the nickname
            fightClub.insert(make_pair(nickname, new Warrior(nickname)));
            cout << "New Warrior "<< nickname << " created!" << endl;
        }break;
        case 2:{                                                //ninja
            fightClub.insert(make_pair(nickname, new Ninja(nickname)));
            cout << "New Ninja "<< nickname << " created!" << endl;
            break;
        }break;
        case 3:{                                                //link
            fightClub.insert(make_pair(nickname, new Link(nickname)));
            cout << "New Link "<< nickname << " created!" << endl;
            break;
        }break;
        case 4:{                                                //cursed
            fightClub.insert(make_pair(nickname, new Cursed(nickname)));
            cout << "New Cursed "<< nickname << " created!" << endl;
        }break;
        case 5:{
            menu();
        }break;
        default:{
            cout << "Please enter a valid number (1-4 or 0)" << endl;
            break;
        }break;
    }
    int doNext = 0;
    
    cout << "To create another Fighter, press (1)" << endl;
    cout << "To return to the main menu, press (0)" << endl;
    cin >> doNext;
    
    switch (doNext) {
        case 1:{
            createFighter(createNickName());
        }break;
        default:{
            menu();
        }break;
    }
}

//deleteFighter() function
//delete a map item (with deconstructor + ?)
void deleteFighter(string nickname){
    if (!fightClub.empty()){
        int consent = 0;
        cout << "Are you sure you want to delete " << nickname << " ?" << endl;
        cout << "YES....(1), NO....(2)" << endl;
        cin >> consent;
        if(consent == 1){
            //entsprechendes map dingens loeschen
            fightClub.erase (nickname);
        }
    }else{
        cout << "There are currently no Fighters in the Fight Club." << endl;
        cout << endl;
        menu();
    }
    int doNext = 0;
    
    cout << "To wipe out another Fighter, press (1)" << endl;
    cout << "To return to the main menu, press (0)" << endl;
    cin >> doNext;
    
    switch (doNext){
        case 1:{
            deleteFighter(deleteNickName());
        }break;
        default:{
            menu();
        }break;
    }
}


//listFighter() function
//lists all the available fighters in the map with their abilities (abilities are only specials?)
void listFighters(){
    if(!fightClub.empty()){
        for(auto elem : fightClub){
            cout << "Nickname: " << elem.first << endl;
            cout << "Special: " << elem.second->getSpecial() << endl;
            cout << "Lifepoints: " << elem.second->lifePoints << endl;
            cout << "Offense Points: " << elem.second->getOP() << endl;
            cout << "Defense Points: " << elem.second->getDP() << endl;
            cout << endl;
        }
    }else{
        cout << "There are currently no Fighters in the Fight Club." << endl;
        cout << endl;
        menu();
    }
    returnToMM();
}



//fight mode:
//1 vs 1:
//pick 2 fighters per nickname and let them fight against each other
//last man standing:
//pick any 2 fighters in the map at random and let all of the fighters fight, until nobody's left
//a fighter CANNOT fight against himself (unique nickname)


//menu
void menu(){                                                        //hauptmenü
    unsigned int input = 0;
    
    cout << "*** MAIN MENU ***" << endl;
    cout << "To create a new Fighter, press (1)" << endl;
    cout << "To choose the fight mode, press (2)" << endl;
    cout << "To list all available Fighters, press (3)" << endl;
    cout << "To delete an existing Fighter, press (4)" << endl;
    
    cin >> input;
    
    switch (input){
        case 1:{
            createFighter(createNickName());
        }break;
        case 2:{                                                //fight mode
            //fight mode: 1v1 or deathmatch
        }break;
        case 3:{                                                //list
            listFighters();
        }break;
        case 4:{                                                //delete
            deleteFighter(deleteNickName());
        }break;
        default:{
            cout << "Please enter a number (1-4)" << endl;
            menu();
        }break;
    }
}








