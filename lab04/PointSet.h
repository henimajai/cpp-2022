//
// Created by Heni on 10/10/2022.
//

#ifndef CPP_2022_POINTSET_H
#define CPP_2022_POINTSET_H

#include "Point.h"
#include <vector>
#include <random>

class PointSet {
    vector<Point> points;
    int n;
    vector<double> distances;
    void computeDistances();
public:
    PointSet(int n = 100);
    double maxDistance() const;
    double minDistance() const;
    int numDistances() const;
    void printPoints() const;
    void printDistances()const;
    void sortPointsX();
    void sortPointsY();
    void sortDistances();
    int numDisttinctDistances();
};


#endif //CPP_2022_POINTSET_H
