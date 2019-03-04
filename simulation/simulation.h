#ifndef SIMULATION_H
#define SIMULATION_H

#include <math.h>

/** 
 * 
 * Mark Glasgow : 2336003g
 * header file for simulation where method declarations are stored. 
 * 
 */

#define C 300000000.0               // The Speed of Light

// Function prototypes
double rel_mass(double rest_mass, double velocity);
double kinetic_energy(double mass, double velocity);

#endif