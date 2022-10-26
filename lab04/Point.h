//
// Created by Heni on 10/10/2022.
//

#ifndef CPP_2022_POINT_H
#define CPP_2022_POINT_H
#define M 2000
#include "iostream"
#include "algorithm"
using namespace std;

class Point{
    private:
        int x, y;
        static int counter;
    public:
        Point( int x=0, int y=0);
        int getX() const;
        int getY() const;
        double distanceTo(const Point& point) const;
        Point(const Point&);
        ~Point();
        static int getCounter(){return counter;}

    };

#endif //CPP_2022_POINT_H
