/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */

#ifndef beam_h
#define beam_h

#include <cmath>
#include <iostream>
using namespace std;
#endif 

//PROTOTYPES
void deflection (double y[], double TOL);
void firstDerivative(double y[], double yPrime[]);
void secondDerivative(double yPrime[], double yDoublePrime[]);
void moment(double m[], double yDoublePrime[]);

//CONSTANT VARIABLES
const double ELASTICITY = 200e6;
const double INERTIA = 8.3e-6;
const double LOAD = 100.0;
const double LENGTH = 1.0;
const double PI = 4.0*atan(1.0);
const double EPSILON = 1e-30;
const int STEPS = 10;


