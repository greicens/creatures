/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#include <iostream>
#include "human.h"
using namespace std;






human::human()
{
}






human::human(int newStrength, int newHitpoints)
:creature(newStrength, newHitpoints)
{
}






string human::getSpecies()
{
    return "human";
}






