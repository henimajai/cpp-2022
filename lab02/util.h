//
// Created by Heni on 9/28/2022.
//

#ifndef CPP_2022_UTIL_H
#define CPP_2022_UTIL_H
#include <iostream>
#include "Point.h"
#include "random"

using namespace std;

double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
Point* createArray(int numPoints);
void printArray(Point* points, int numPoints);
bool comparePoints(const Point& p1, const Point& p2);
pair<Point, Point> closestPoints(Point* points, int numPoints);
pair<Point, Point> farthestPoints(Point* points, int numPoints);
#endif //CPP_2022_UTIL_H
