/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#ifndef BALROG_H
#define BALROG_H

#include <iostream>
#include "demon.h"
using namespace std;






class balrog:public demon{
public:
    balrog();
    balrog(int newStrength, int newHitpoints);
    string getSpecies();
    int getDamage();
    
};

#endif