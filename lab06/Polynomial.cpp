//
// Created by Heni on 10/26/2022.
//

#include "Polynomial.h"


Polynomial::Polynomial(int degree, const double *coefficients) {
    this->capacity = degree+1;
    this->coefficients = new double [capacity];
    for(int i = 0; i < this->capacity; ++i) {
        this->coefficients[i] = coefficients[i];
    }


}

ostream &operator<<(ostream &out, const Polynomial &what) {
    for(int i = 0; i < what.capacity -1 ; ++i){
        out << what.coefficients[i] << "x^" << (what.capacity-i-1) << "+";
    }
    out << what.coefficients[what.capacity -1] << endl;
    return out;
}

Polynomial::~Polynomial() {
    if(coefficients != nullptr){
        delete[] coefficients;
        capacity = 0;
    }

}

double Polynomial::evaluate(double x) const {
    double p = coefficients[0];
    for(int i = 0; i < capacity-1; ++i){
        p = p * x + coefficients[i+1];
    }
    return p;
}

Polynomial::Polynomial(const Polynomial &that) {
    this->capacity = that.capacity;
    this->coefficients = new double[this->capacity];
    for(int i = 0; i < this->capacity; ++i) {
        this->coefficients[i] = that.coefficients[i];
    }
}

Polynomial Polynomial::derivative() const {
    double coeffs[this->capacity - 1];
    Polynomial der(this->degree()-1,coeffs);
    int n = this->degree();
    for(int i = 0; i <= n-1; i++) {
        der.coefficients[i] = (n-i) * this->coefficients[i];
    }
    return der;
}
