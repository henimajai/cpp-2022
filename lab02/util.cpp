//
// Created by Heni on 9/28/2022.
//

#include <cmath>
#include "util.h"

double distance(const Point& a, const Point& b){
        return (a.getX() - b.getX()) * (a.getX() - b.getY()) + (a.getY() - b.getY()) * (a.getY() - b.getY());
}

bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d){
    double d2 = distance(a, b); // from p1 to p2
    double d3 = distance(a, c); // from p1 to p3
    double d4 = distance(a, d); // from p1 to p4

    if (d2 == 0 || d3 == 0 || d4 == 0)
        return false;

    if (d2 == d3 && 2 * d2 == d4
        && 2 * distance(b, d) == distance(b, c)) {
        return true;
    }

    if (d3 == d4 && 2 * d3 == d2
        && 2 * distance(c, b) == distance(c, d)) {
        return true;
    }
    if (d2 == d4 && 2 * d2 == d3
        && 2 * distance(b, c) == distance(b, d)) {
        return true;
    }

    return false;

}

Point *createArray(int numPoints) {
    Point * points = new Point[numPoints];
    for(int i = 0; i < numPoints; ++i){
        int x = 0 + rand() % 2000+1;
        int y = 0 + rand() % 2000+1;
        points[i].setX(x);
        points[i].setY(y);
    }

    //printArray(points,numPoints);
    return points;

}

void printArray(Point *points, int numPoints) {
    for(int i = 0; i < numPoints; i++){
        cout << "(" << points[i].getX() << "," << points[i].getY() <<")";
    }
}

pair<Point, Point> closestPoints(Point *points, int numPoints) {
    //printArray(points,numPoints);
    int mini = 999999999;
    int *result;
    result = (int*)calloc(4,sizeof(int ));
    for(int i = 0; i < numPoints; ++i){
        for(int j = i; j < numPoints-1; ++j){
            int dist = distance(points[i], points[j+1]);
            if( dist < mini){
                mini = dist;
                result[0] = points[i].getX();
                result[1] = points[i].getY();
                result[2] = points[j+1].getX();
                result[3] = points[j+1].getY();
                //cout<< result[0] << ' ' << result[1] << endl;
            }

        }
    }
    pair<Point, Point> p;
    cout << "(" << result[0] << "," << result[1] << ")" <<
            "(" << result[2] << "," << result[3] << ")" <<endl;
   /* pair <Point, Point> p;
    p = make_pair((result[0], result[1]), (result[2], result[3]));
    return p;*/
   free(result);

}

pair<Point, Point> farthestPoints(Point *points, int numPoints) {
    int maxi = 0;
    int *result;
    result = (int*)calloc(4,sizeof(int ));
    for(int i = 0; i < numPoints; ++i){
        for(int j = i; j < numPoints-1; ++j){
            int dist = distance(points[i], points[j+1]);
            if( dist > maxi){
                maxi = dist;
                result[0] = points[i].getX();
                result[1] = points[i].getY();
                result[2] = points[j+1].getX();
                result[3] = points[j+1].getY();
                //cout<< result[0] << ' ' << result[1] << endl;
            }

        }
    }
    pair<Point, Point> p;
    cout << "(" << result[0] << "," << result[1] << ")" <<
         "(" << result[2] << "," << result[3] << ")" <<endl;
    free(result);
}

bool comparePoints(const Point &p1, const Point &p2) {
    return p1.getX() < p2.getX();
}

