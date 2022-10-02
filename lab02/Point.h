//
// Created by Heni on 9/28/2022.
//

#ifndef CPP_2022_POINT_H
#define CPP_2022_POINT_H
#include <iostream>

using namespace std;

class Point{
private:
    int x, y;
public:
    Point( int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void printP()const;
    void setX(int x);
    void setY(int y);

};
#endif //CPP_2022_POINT_H
