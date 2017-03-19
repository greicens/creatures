/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#include <iostream>
#include "demon.h"
using namespace std;






demon::demon()
{
}






demon::demon(int newStrength, int newHitpoints)
: creature(newStrength, newHitpoints)
{
}






string demon::getSpecies()
{
    return "demon";
}






int demon::getDamage()
{
    int damage = creature::getDamage();
    //cout << "attacks for " << damage << " points!" << endl;
    
    if (rand() % 4 == 0) {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
    }
    return damage;
}
