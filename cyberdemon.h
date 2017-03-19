/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include <iostream>
#include "demon.h"
using namespace std;

class cyberdemon:public demon{
public:
    cyberdemon();
    cyberdemon(int newStrength, int newHitpoints);
    string getSpecies();
    
    
};


#endif