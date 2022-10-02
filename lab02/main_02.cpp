#include <iostream>
#include <fstream>
#include <algorithm>
#include "Point.h"
#include "util.h"

using namespace std;
void test_distance();

void testIsSquare(const char * filename);

int main() {

    //testIsSquare("points.txt");
    cout << "Enter s positive number: \n";
    int n;
    cin >> n;
    //cout << "\n Random points: \n";
    //printArray(createArray(n),n);

    Point* pointss = createArray(n);
    printArray(pointss,n);
    cout<< "\nClosest points: " << endl;
    closestPoints(pointss,n);
    /*cout << "(" << closestPoints(pointss,n).first.getX() << ", " << closestPoints(pointss,n).first.getY() << ") "
    << "(" << closestPoints(pointss,n).second.getX() << ", " << closestPoints(pointss,n).second.getY() << ")";*/
    cout<< "\nFarthrest points: " << endl;
    farthestPoints(pointss,n);
    /*cout << "(" << farthestPoints(createArray(n),n).first.getX() << ", " << farthestPoints(createArray(n),n).first.getY() << ") "
    << "(" << farthestPoints(createArray(n),n).second.getX() << ", " << farthestPoints(createArray(n),n).second.getY() << ")";*/

    //sort
    Point points[]{{10,10}, {1,0}, {0,1}, {2,2}};
    //sort(points,points + 4, comparePoints);
    return 0;

}

void test_distance(){
    Point p1(0,0);
    cout<<"distance(p1,p1):" << distance(p1,p1)<< endl;
    cout<<"distance(p1, Point(3,4)): " << distance(p1, Point(3,4)) <<endl;
}



void testIsSquare(const char * filename){
    Point A, B, C, D;
        ifstream ifs("points.txt");
    if( !ifs) {
        cout<< "File open error" << endl;
    }
    else {
        cout << "File is open!" << endl;
    }
    int a,b;
    while(!ifs.eof()){
        ifs >> a >> b;
        A.setX(a);
        A.setY(b);
        A.printP();

        ifs >> a >> b;
        B.setX(a);
        B.setY(b);
        B.printP();

        ifs >> a >> b;
        C.setX(a);
        C.setY(b);
        C.printP();

        ifs >> a >> b;
        D.setX(a);
        D.setY(b);
        D.printP();

        isSquare(A,B,C,D) ? cout << "\nYes\n" : cout << "\nNo\n";
    }

}

