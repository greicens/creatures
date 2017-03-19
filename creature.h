/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>


class creature {
private:
    int strength;
    int hitpoints;
    
public:
    creature();
    creature(int newStrength, int newHitpoints);
    virtual std::string getSpecies() = 0;
    virtual int getDamage();
    int getStrength() const{return strength;}
    int getHitpoints() const {return hitpoints;}
    void setStrength(int s){ strength = s;}
    void setHitpoints(int h){hitpoints = h;}
};

#endif