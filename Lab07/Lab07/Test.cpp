//
//  Test.cpp
//  Lab07
//
//  Created by Milind Pathiyal on 11/1/17.
//  Copyright © 2017 Milind Pathiyal. All rights reserved.
//
/*
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int counter = 0;
    int array1[]={2,6,5,11,11} ; // 0-8
    int array2[]={7,1,11,11,11} ;
    
    
    for (int i = 0 ; i < 5 ; i++)
    {
        if (array1[i] != 11 )
            counter++ ; // counter gives us the used number of digits
    }
    
    
    for (int j = 0 ; j < counter/2 ; j ++)  //Flipping the numebr
    {
        
        
        swap(array1[j] , array1[counter-1-j] ) ;
        
    }
    
    for (int k = 0 ; k < 5 ; k ++)
    {
        if (array1[k] != 11)
            cout << array1[k] << "\t" ;
        else
        {
            array1[k] = 0 ;
            cout << array1[k] << "\t" ;
        }
        
        
    }
    int counter2 = 0;
    //For the seocnd array
    for (int i = 0 ; i < 5 ; i++)
    {
        if (array2[i] != 11 )
            counter2++ ; // counter gives us the used number of digits
    }
    
    
    for (int j = 0 ; j < counter2/2 ; j ++)  //Flipping the numebr
    {
        
        
        swap(array2[j] , array2[counter2-1-j] ) ;
        
    }
    
    for (int k = 0 ; k < 5 ; k ++)
    {
        if (array2[k] != 11)
            cout << array2[k] << "\t" ;
        else
        {
            array2[k] = 0 ;
            cout << array2[k] << "\t" ;
        }
        
        
    }

    cout << endl ;
   // cout << "THE SUM IS: " ;
 
    for (int l = 0 ; l < 5 ; l++)
    {
        
        cout << array1[l];
    }
    cout << endl;
    for (int l = 0 ; l < 5 ; l++)
    {
        
        cout << array2[l] ;
    }
    cout << endl;
    for (int l = 0 ; l < 5 ; l++)
    {
        
        cout << array1[l] + array2[l] ;
    }
    

 
    return 0;
}
*/
