//
// Created by Heni on 10/10/2022.
//

#include "Point.h"
Point::Point(int x, int y) {
    if (x >= 0 && x <= M) this->x = x;
    else
        this->x = 0;
    if (y >= 0 && y <= M) this->y = y;
    else
        this->y = 0;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

double Point::distanceTo(const Point &point) const {

}

