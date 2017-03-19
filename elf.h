/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#ifndef ELF_H
#define ELF_H

#include <iostream>
#include "creature.h"
using namespace std;






class elf:public creature {
public:
    elf();
    elf(int newStrength, int newHitpoints);
    string getSpecies();
    int getDamage();
};

#endif