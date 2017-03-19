/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#include <iostream>
#include "elf.h"
using namespace std;






elf::elf()
{
}






elf::elf(int newStrength, int newHitpoints)
:creature(newStrength, newHitpoints)
{
}






string elf::getSpecies()
{
    return "elf";
}






int elf::getDamage()
{
    int damage = creature::getDamage();
    
    //cout << "The elf attacks for " <<  damage << " points!" << endl;
    
    if ((rand() % 2) == 0) {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= 2;
    }
    return damage;
}
