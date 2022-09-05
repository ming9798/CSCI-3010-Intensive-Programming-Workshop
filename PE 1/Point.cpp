#include <iostream>
#include <math.h>
#include "Point.h"

using namespace std;


Point::Point (){ //sets points at the origin
    x = 0;
    y= 0;
        }
Point::Point(int a, int b){
    x = a;
    y = b;
}

double Point::distance (Point p){ //distance between two points
    int minusX = abs(p.x -x);
    int minusY = abs(p.y - y);
    return sqrt(pow(minusX, 2) + pow(minusY, 2));
        }


void Point::translate (int num){ //increase/decrease point by input value
    x = x + num;
    y = y + num;
        }