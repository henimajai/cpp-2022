//
// Created by Heni on 10/25/2022.
//

#ifndef CPP_2022_MATRIX_H
#define CPP_2022_MATRIX_H

#include <iostream>
#include <stdexcept>

using namespace std;


class Matrix {
public:
    //Methods
    // Default constructor
    Matrix( int mRows = 10, int mCols =10);
    // Copy constructor
    Matrix(const Matrix& what);
    // Move constructor
    Matrix( Matrix&& what );
    // Destructor
    ~Matrix();

    //fills the matrix with identical elements
    void fillMatrix(double value);

    void randomMatrix(int a, int b); //fills
    void printMatrix(ostream& os = cout) const;
    bool isSquare() const;
    int getRows() const { return this->mRows;}
    int getCols() const { return this->mCols;}

    // operation is permitted on matrices having the same dimensions
    // otherwise throws an out_of_range exception!!
    friend Matrix operator+(const Matrix& x, const Matrix& y);

    // operation is permitted on matrices having proper dimensions
    // otherwise throws an out_of_range exception!!
    friend Matrix operator*(const Matrix& x, const Matrix& y);

    // extractor operator
    friend istream & operator>>(istream& is, Matrix& mat);
    // inserter operator
    friend ostream & operator<<(ostream& os, const Matrix& mat);

    // index operator
    double* operator[] (int index);
    // index operator that works on constant matrices!
    double* operator[] (int index) const;

    // Copy assignment
    // operation is permitted between matrices having the same dimensions
    // otherwise throws an exception (out_of_range)
    Matrix & operator=(const Matrix& mat);
    // Move assignment
    Matrix & operator=(Matrix&& mat);




private:
    //Data
    double ** mElements;
    int mRows;
    int mCols;

};


#endif //CPP_2022_MATRIX_H
