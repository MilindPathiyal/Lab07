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
#include <stdio.h>
using namespace std;

void deflection (double y[], double diff){
    double sum, k, j;
    for(int x = 0; x <= STEPS; x++){
        j = 1;
        sum = 0;
        k = x*(LENGTH/10);
        
        do{
            diff = (pow(-1, j+1)/ pow(j, 5))*sin((j*PI*k)/LENGTH);
            sum += diff;
            j++;
        }
        while(EPSILON < diff);
        y[x] =  ((2*LOAD*(pow(LENGTH, 4))) / ((pow(PI,5)*ELASTICITY*INERTIA))) * sum;           //DEFLECTION FORMULA
    }

    //PRINT OUT RESULTS
    cout << "Deflection of Object" << endl;
    
    for(int x = 0; x <= STEPS; x++){
        cout << "Step " << x << "  Displacement: " << y[x] << endl;
    }
}
//CALCULATE DERIVATIVE
void firstDerivative(double y[], double yPrime[]){
    for(int x = 0; x <= STEPS; x++){
        yPrime[x] = (y[x+1] - y[x])/ (LENGTH/STEPS);                        //FIRST DERIVATIVE EQUATION
    }
}
//CALCULATE DERIVATIVE
void secondDerivative(double yPrime[], double yDoublePrime[]){
    for(int x = 0; x <= STEPS; x++){
        yDoublePrime[x] = (yPrime[x+1] - yPrime[x])/ (LENGTH/STEPS);         //SECOND DERIVATIVE EQUATION

    }
}
//CALCULATE MOMENT
void moment(double m[], double yDoublePrime[]){
    for (int x = 0; x <= STEPS; x++){
        m[x] = ELASTICITY*INERTIA*yDoublePrime[x];                              //MOMENT FORMULA
    }
    //PRINT OUT RESULTS
    cout << endl << "Moments of Object" << endl;
    
    for(int x = 0; x <= STEPS; x++){
        cout << "Step: " << x << "   Moment: " << m[x] << " N*m" << endl;
    }
}

