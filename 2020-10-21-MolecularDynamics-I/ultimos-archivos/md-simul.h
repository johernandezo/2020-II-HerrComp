#ifndef __MD_SIMUL_H_
#define __MD_SIMUL_H_

#include <iostream>
#include "particle.h"

const double G = 0.0; // -9.81;
const int NSTEPS = 1000;
const double DT = 0.01;
const double K = 253.57;
const double b = 0.2;
const double LX = 2.5;
const double LY = 2.5;
const double LZ = 2.5; 


// function declarations
void initial_conditions(Particle & body);
void compute_force(Particle & body);
void time_integration(Particle & body, const double & dt);
void start_integration(Particle & body, const double & dt);
void print(Particle & body, double time);

#endif // __MD_SIMUL_H_


