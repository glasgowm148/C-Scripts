#include "simulation.h"

/** 
 * 
 * Mark Glasgow : 2336003g
 * C file for simulation - header file is included above
 * which contains the definition for the var C, and
 * the function protocols. 
 * 
 */



/**
 * Returns the relitivistic mass of an object given its rest mass and velocity
 */
double rel_mass(double rest_mass, double velocity)
{
	return rest_mass / ( sqrt( 1 - ( (velocity * velocity) / (C * C) ) ) );
}


/**
 * Returns the kintetic energy of an object given its mass and velocity
 */
double kinetic_energy(double mass, double velocity) 
{
     return 0.5 * mass * (velocity * velocity);
}

