/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "creature.h"
using namespace std;






class human:public creature{
public:
    human();
    human(int newStrength, int newHitpoints);
    string getSpecies();
    
    
};

#endif