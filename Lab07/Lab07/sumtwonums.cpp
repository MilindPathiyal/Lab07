//
//  sumtwonums.cpp
//  Lab07
//
//  Created by Milind Pathiyal on 11/1/17.
//  Copyright © 2017 Milind Pathiyal. All rights reserved.
//
/*
#include <iostream>
#include "sumtwonums.h"
using namespace std;

void getInfo(char num[]){
    cout << "Enter an integer with 20 digits or less: ";
    cin.get(num, 20);
    cin.ignore();
}

void convert(char num[], int numz[], int &x){
    int &index = x;
    for(int j = 0; j < 20; j++)
    {
        numz[19- j] = num[j] - 48;
        if(numz[19 - j] == -48)
        {
            index = 20 - j;
            numz[19 - j] = 11;
        }

    }
    
    
}

void add(int numzA[], int numzB[], int numzAIndex, int numzBIndex){
    int x = 0;
        for(int i = 0; i < 20; i ++){
            
           // if (numzA[i] == 0 && numz|| numzA[i] == 11)
            if(numzA[i] + numzB[i] > 10 && (numzA[i+1] && numzB[i +1]))
                x = 1;
            if(x == 1)
                
                cout << numzA[i] + numzB[i] + x;
            else
                cout << numzA[i] + numzB[i];

            
            
        }
    
        
        
        
}

*/

