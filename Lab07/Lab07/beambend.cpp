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

#include "beam.h"
#include <iostream>
using namespace std;

int main(){
    double diff = 0;
    
    //CREATE ARRAYS
    double y [STEPS];
    double yPrime [STEPS];
    double yDoublePrime [STEPS];
    double m[STEPS];

    //INITIALIZING 'y' ARRAY
    for(int x = 0; x <= STEPS; x++)
        y[x] = 0;
    
    //CALL FUNCTIONS
    deflection(y, diff);
    firstDerivative (y, yPrime);
    secondDerivative (yPrime, yDoublePrime);
    moment (m, yDoublePrime);
    
    return 0;
}

