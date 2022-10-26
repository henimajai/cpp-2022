#include <iostream>
#include "Polynomial.h"
using namespace std;

int main() {
    double coef[]{1,2,1};
    Polynomial p1(2,coef);
    cout <<"p1: " <<  p1;
    cout <<"degree(p1): " << p1.degree() << endl;
    cout <<p1.evaluate(1) << endl;
    cout << "derivative: " << p1.derivative() << endl;


    return 0;
}