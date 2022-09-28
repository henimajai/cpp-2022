#include <iostream>
#include "Point.h"
#include "util.h"

using namespace std;
void test_distance();

int main() {
    Point p1(2,3);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(100, 200);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point * pp1 = new Point(300, 400);
    Point * pp2 = new Point(500, 1000);
    cout<<"pp1( "<<pp1->getX()<<","<<pp1->getY()<<")"<<endl;
    cout<<"pp2( "<<pp2->getX()<<","<<pp2->getY()<<")"<<endl;
    delete pp1;
    delete pp2;

    test_distance();
    return 0;

}

void test_distance(){
    Point p1(0,0);
    cout<<"distance(p1,p1):" << distance(p1,p1)<< endl;
    cout<<"distance(p1, Point(3,4)): " << distance(p1, Point(3,4)) <<endl;
}
