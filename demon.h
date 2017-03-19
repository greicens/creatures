/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#ifndef DEMON_H
#define DEMON_H

#include <iostream>
#include "creature.h"
using namespace std;






class demon:public creature {
public:
    demon();
    demon(int newStrength, int newHitpoints);
    string getSpecies();
    int getDamage();

};

#endif