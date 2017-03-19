/*
 student: Greice Silva on 5/09/15.
 CS110B, assignment: a16.1
 Instructor: Harden, Dave.
 */


#include <iostream>
#include "cyberdemon.h"
using namespace std;






cyberdemon::cyberdemon()
{
}






cyberdemon::cyberdemon(int newStrength, int newHitpoints)
:demon(newStrength, newHitpoints)
{
}






string cyberdemon::getSpecies()
{
    return "cyberdemon ";
}







