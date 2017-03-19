/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */

#include <cassert>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "creature.h"
#include "demon.h"
#include "cyberdemon.h"
#include "balrog.h"
#include "elf.h"
#include "human.h"
using namespace std;

bool battleArena(creature &creature1, creature& creature2);




int main() {
    srand(time(0));
    
    human h1;
    elf e1;
    cyberdemon c1;
    balrog b1;
    
    human h(20, 30);
    elf e(40, 50);
    cyberdemon c(60, 70);
    balrog b(80, 90);
    
    cout << "default human strength/hitpoints: " << h1.getStrength() << "/" << h1.getHitpoints() << endl;
    cout << "default elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;
    cout << "default cyberdemon strength/hitpoints: " << c1.getStrength() << "/" << c1.getHitpoints() << endl;
    cout << "default balrog strength/hitpoints: " << b1.getStrength() << "/" << b1.getHitpoints() << endl;
    cout << "non-default human strength/hitpoints: " << h.getStrength() << "/" << h.getHitpoints() << endl;
    cout << "non-default elf strength/hitpoints: " << e.getStrength() << "/" << e.getHitpoints() << endl;
    cout << "non-default cyberdemon strength/hitpoints: " << c.getStrength() << "/" << c.getHitpoints() << endl;
    cout << "non-default balrog strength/hitpoints: " << b.getStrength() << "/" << b.getHitpoints() << endl;
    cout << endl << endl;
    
    cout << "Examples of " << h.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = h.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << e.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = e.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << c.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = c.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << b.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = b.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    battleArena(h, c);
    battleArena(e,b);
}






bool battleArena(creature &creature1, creature& creature2)
{
    int damage1 = creature1.getDamage() - creature2.getHitpoints() ;
    int damage2 = creature2.getDamage() - creature1.getHitpoints();
    
    
    while (true) {
        
        if (damage1 <= 0 && damage2 <= 0) {
            cout << "Its a tie" << endl;
           return true;
        }
        else if (damage1 > damage2 || damage2 > damage1){
            cout << "battle is over" << endl;
            return true;
        }
        
    }
    return false;
}

/*************************************************************************
 OUTPUT:
 default human strength/hitpoints: 10/10
 default elf strength/hitpoints: 10/10
 default cyberdemon strength/hitpoints: 10/10
 default balrog strength/hitpoints: 10/10
 non-default human strength/hitpoints: 20/30
 non-default elf strength/hitpoints: 40/50
 non-default cyberdemon strength/hitpoints: 60/70
 non-default balrog strength/hitpoints: 80/90
 
 
 Examples of human damage:
 The human attacks for 7 points!
 Total damage = 7
 
 The human attacks for 3 points!
 Total damage = 3
 
 The human attacks for 12 points!
 Total damage = 12
 
 The human attacks for 20 points!
 Total damage = 20
 
 The human attacks for 8 points!
 Total damage = 8
 
 The human attacks for 10 points!
 Total damage = 10
 
 The human attacks for 15 points!
 Total damage = 15
 
 The human attacks for 3 points!
 Total damage = 3
 
 The human attacks for 10 points!
 Total damage = 10
 
 The human attacks for 8 points!
 Total damage = 8
 
 
 Examples of elf damage:
 The elf attacks for 12 points!
 Magical attack inflicts 12 additional damage points!
 Total damage = 24
 
 The elf attacks for 9 points!
 Magical attack inflicts 9 additional damage points!
 Total damage = 18
 
 The elf attacks for 2 points!
 Total damage = 2
 
 The elf attacks for 12 points!
 Magical attack inflicts 12 additional damage points!
 Total damage = 24
 
 The elf attacks for 29 points!
 Magical attack inflicts 29 additional damage points!
 Total damage = 58
 
 The elf attacks for 30 points!
 Magical attack inflicts 30 additional damage points!
 Total damage = 60
 
 The elf attacks for 16 points!
 Magical attack inflicts 16 additional damage points!
 Total damage = 32
 
 The elf attacks for 26 points!
 Total damage = 26
 
 The elf attacks for 30 points!
 Magical attack inflicts 30 additional damage points!
 Total damage = 60
 
 The elf attacks for 38 points!
 Magical attack inflicts 38 additional damage points!
 Total damage = 76
 
 
 Examples of cyberdemon  damage:
 The cyberdemon attacks for 12 points!
 Total damage = 12
 
 The cyberdemon attacks for 60 points!
 Total damage = 60
 
 The cyberdemon attacks for 34 points!
 Total damage = 34
 
 The cyberdemon attacks for 31 points!
 Total damage = 31
 
 The cyberdemon attacks for 3 points!
 Total damage = 3
 
 The cyberdemon attacks for 44 points!
 Total damage = 44
 
 The cyberdemon attacks for 51 points!
 Total damage = 51
 
 The cyberdemon attacks for 18 points!
 Demonic attack inflicts 50 additional damage points!
 Total damage = 68
 
 The cyberdemon attacks for 48 points!
 Total damage = 48
 
 The cyberdemon attacks for 30 points!
 Total damage = 30
 
 
 Examples of balrog damage:
 The balrog attacks for 30 points!
 Balrog speed attack inflicts 56 additional damage points!
 Total damage = 86
 
 The balrog attacks for 35 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 19 additional damage points!
 Total damage = 104
 
 The balrog attacks for 60 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 32 additional damage points!
 Total damage = 142
 
 The balrog attacks for 4 points!
 Balrog speed attack inflicts 11 additional damage points!
 Total damage = 15
 
 The balrog attacks for 23 points!
 Balrog speed attack inflicts 1 additional damage points!
 Total damage = 24
 
 The balrog attacks for 32 points!
 Balrog speed attack inflicts 63 additional damage points!
 Total damage = 95
 
 The balrog attacks for 50 points!
 Balrog speed attack inflicts 76 additional damage points!
 Total damage = 126
 
 The balrog attacks for 73 points!
 Balrog speed attack inflicts 9 additional damage points!
 Total damage = 82
 
 The balrog attacks for 76 points!
 Balrog speed attack inflicts 57 additional damage points!
 Total damage = 133
 
 The balrog attacks for 65 points!
 Balrog speed attack inflicts 16 additional damage points
 
 **************************************************************************/
 
