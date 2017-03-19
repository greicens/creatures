/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#include <iostream>
#include "balrog.h"
using namespace std;






balrog::balrog()
{
}






balrog::balrog(int newStrength, int newHitpoints)
:demon(newStrength, newHitpoints)
{
}






string balrog::getSpecies()
{
    return "balrog";
}






int balrog::getDamage()
{
    int damage;
    //cout << "The balrog ";
    damage = demon::getDamage();
    
    int damage2 = (rand() % demon::getStrength()) + 1;
    cout << "Balrog speed attack inflicts " <<  damage2 << " additional damage points!" << endl;
    damage += damage2;
    
    return damage;
}
