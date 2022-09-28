//
// Created by Heni on 9/28/2022.
//

#include "util.h"
double Point::distance(const Point &a, const Point &b) {
    return sqrt(pow(a.getX() - b.getY(),2));
}