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
/*
#include <iostream>
#include <math.h>
#include "coord.h"
#define PI 3.14159265

void getPoint(Point3D &point);
void printPoint(const Point3D &point);
void spatialDist(const Point3D &pointA,const Point3D &pointB);
void planiDist(const Point3D &pointA, const Point3D &pointB);
void htDiff(const Point3D &pointA, const Point3D &pointB);
void azimuth(const Point3D &pointA, const Point3D &pointB);

using namespace std;


void getPoint (Point3D &point){
    cout << "Enter X value: ";
    cin >> point.xCoord;
    cout << "You have entered: " << point.xCoord <<endl;
    
    cout << "Enter Y value: ";
    cin >> point.yCoord;
    cout << "You have entered: " << point.yCoord <<endl;
    
    cout << "Enter Z value: ";
    cin >> point.zCoord;
    cout << "You have entered: " << point.zCoord <<endl;
 
 
}

void printPoint (const Point3D &point){
    cout << "X: " << point.xCoord << endl;
    cout << "Y: " << point.yCoord << endl;
    cout << "Z: " << point.zCoord << endl;
}

void spatialDist(const Point3D &pointA, const Point3D &pointB){
    double answer;
    answer = sqrt( pow((pointB.xCoord - pointA.xCoord), 2) + pow((pointB.yCoord - pointA.yCoord), 2) + pow((pointB.zCoord - pointA.zCoord), 2));
    cout << answer;
}

void planiDist(const Point3D &pointA, const Point3D &pointB){
    double answer;
    answer = sqrt( pow((pointB.xCoord - pointA.xCoord), 2) + pow((pointB.yCoord - pointA.yCoord), 2));
    cout << answer;
}

void htDiff(const Point3D &pointA, const Point3D &pointB){
    cout << fabs(pointB.zCoord - pointA.zCoord);
}

void azimuth(const Point3D &pointA, const Point3D &pointB){
    double answer;
    answer = atan2((pointB.yCoord-pointA.yCoord), (pointB.xCoord-pointA.xCoord)) * 180 /PI;
    cout << answer;
}

*/
