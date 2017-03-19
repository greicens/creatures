/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#include <iostream>
#include "creature.h"
using namespace std;

creature::creature()
{
    strength = 10;
    hitpoints = 10;
}






creature::creature(int newStrength, int newHitpoints)
{
    strength = newStrength;
    hitpoints = newHitpoints;
}






int creature::getDamage()
{
    int damage = (rand() % strength) + 1;
    cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
    return damage;
    
}







