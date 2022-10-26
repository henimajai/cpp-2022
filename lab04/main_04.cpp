#include <iostream>
#include <vector>
#include "PointSet.h"
using namespace std;

int main() {
    int n = 2;
    //cout<<"Pontok\tMinTav\t MaxTav\t #tavolsagok\t#kulonbozotavolsagok"<<endl;
   // cout<< fixed;
    /*
    for( int i= 0; i<12; ++i ){
        PointSet pSet( n );
        cout<<setw(6)<<n<<" ";
        cout<<setw(8)<<setprecision(2)<<pSet.minDistance()<<" ";
        cout<<setw(8)<<setprecision(2)<<pSet.maxDistance()<<" ";
        cout<<setw(10) << pSet.numDistances()<<" ";
        cout<<setw(16) << pSet.numDistinctDistances()<<endl;
        n = n << 1;
    }*/

    //PointSet pset1(10);
    Point p1(1,2),p2;
    cout<<"#points: " <<Point::getCounter()<<endl;
    //PointSet pset2(20);
    Point p3 = p1;
    Point p4(p2);
    cout<<"#points: " <<Point::getCounter()<<endl;
    Point *p5 = new Point(3,3);
    cout<<"#points: " <<Point::getCounter()<<endl;
    delete p5;
    cout<<"#points: " <<Point::getCounter()<<endl;

    return 0;
}