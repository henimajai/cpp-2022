//
// Created by Heni on 10/10/2022.
//

#include "PointSet.h"

PointSet::PointSet(int n) {
    for(int i = 0; i < n; ++i){
        points.push_back(Point(rand() % M, rand()% M));
    }
}

void PointSet::computeDistances() {
    for (int i = 0; i < points.size(); ++i) {
        for (int j = i+1; j < points.size(); ++j) {

            int x1 = points.at(i).getX();
            int x2 = points.at(j).getX();
            int y1 = points.at(i).getY();
            int y2 = points.at(j).getY();

            double dist = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
            distances.push_back(sqrt(dist));
        }
    }
}

double PointSet::maxDistance() const {
    return *max_element(this->distances.begin(),this->distances.end());
}

double PointSet::minDistance() const {
    return *min_element(this->distances.begin(),this->distances.end());
}



