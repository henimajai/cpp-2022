//
// Created by Heni on 9/28/2022.
//

#include <valarray>
#include "Point.h"

Point::Point(int x, int y) {
    if (x >= 0 && x <= 2000 && y >= 0 && y <= 2000){
        this->x = x;
        this->y = y;
    }
    else{
        this->x = 0;
        this->y = 0;
    }
}
int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}

void Point::printP() const {
    cout<<"(" <<getX()<< ',' << getY() << ") ";
}

void Point::setX(int x) {
    if(x >= 0 && x <= 2000){
        this -> x = x;
    }
}

void Point::setY(int y){
    if(y >= 0 && y <= 2000){
        this -> y = y;
    }
}


