#include <iostream>
#include "Point.h"
using namespace std;

int main(){
   //create new point objects and set their coordinates

    Point p1;
    p1.setX(1);
    p1.setY(2);

    Point p2;
    p2.setX(2);
    p2.setY(1);

    Point p3;
    p3.setX(0);
    p3.setY(1);

    //Print points
    cout << "Current Points:" << endl;
    cout << "p1: (" << p1.getX() << " , " << p1.getY() << ")" << endl;
    cout << "p2: (" << p2.getX() << " , " << p2.getY() << ")" << endl;
    cout << "p3: (" << p3.getX() << " , " << p3.getY() << ")" << endl;

    //Calculating distances
    cout << endl << "Distances:" << endl;
    cout << "Distance between p1 and p2: " << p1.distance(p2) << endl;
    cout << "Distance between p2 and p3: " << p2.distance(p3) << endl;
    cout << "Distance between p3 and p1: " << p3.distance(p1) << endl;

    //Translate p2 by positive 8
    p2.translate(8);

    //Updated p2
    cout << endl << "p2 After Translating by +8:" << endl;
    cout << "p2: (" << p2.getX() << " , " << p2.getY() << ")" << endl;
   
    //Calculating new distances
    cout << endl << "New Distances:" << endl;
    cout << "Distance between p1 and p2: " << p1.distance(p2) << endl;
    cout << "Distance between p2 and p3: " << p2.distance(p3) << endl;
    cout << "Distance between p3 and p1: " << p3.distance(p1) << endl;

    //Translate p2 by -10
    p2.translate(-10);

    //Updated p2
    cout << endl << "p2 After Translating by -10:" << endl;
    cout << "p2: (" << p2.getX() << " , " << p2.getY() << ")" << endl;

    //Calculating new distances
    cout << endl << "New Distances:" << endl;
    cout << "Distance between p1 and p2: " << p1.distance(p2) << endl;
    cout << "Distance between p2 and p3: " << p2.distance(p3) << endl;
    cout << "Distance between p3 and p1: " << p3.distance(p1) << endl;

    //Print final points
    cout << endl << "Final Points:" << endl;
    cout << "p1: (" << p1.getX() << " , " << p1.getY() << ")" << endl;
    cout << "p2: (" << p2.getX() << " , " << p2.getY() << ")" << endl;
    cout << "p3: (" << p3.getX() << " , " << p3.getY() << ")" << endl;
    

    return 0;
}