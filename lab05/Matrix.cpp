//
// Created by Heni on 10/25/2022.
//

#include "Matrix.h"
#include <cstdlib>
#include <time.h>
#include <random>


using namespace std;

//constructor
Matrix::Matrix(int mRows, int mCols){
    this->mRows = mRows;
    this->mCols = mCols;
    mElements = new double *[mRows]();

    for(int i = 0; i < mRows; ++i){
        mElements[i] = new double[mCols];
    }
}

//copy constructor
Matrix::Matrix(const Matrix &what) {
    this->mRows = what.mRows;
    this->mCols = what.mCols;
    this->mElements = new double *[mRows];
    for(int i = 0; i <mRows; ++i){
        this->mElements[i] = new double[mCols];
    }
    for(int i=0;i<mRows;++i){
        for(int j=0;j<mCols;++j){
            mElements[i][j] = what.mElements[i][j];
        }
    }
}

//move constructor
Matrix::Matrix(Matrix &&what){

    this -> mRows = what.mRows;
    this -> mCols = what.mCols;
    this -> mElements = what.mElements;
    what.mRows = 0;
    what.mCols = 0;
    what.mElements = nullptr;
}

//destructor
Matrix::~Matrix(){
    if(mElements != nullptr){
        for(int i = 0; i <mRows; ++i){
            delete [] mElements[i];
        }
        delete [] mElements;
    }
}

void Matrix::fillMatrix(double value){
    for (int i = 0; i < mRows; ++i)
    {
        for (int j = 0; j < mCols; ++j)
        {
            mElements[i][j] = value;
        }
    }
}

void Matrix::randomMatrix(int a, int b){
    for(int i = 0; i < mRows; ++i){
        for(int j = 0; j < mCols; ++i){
            mElements[i][j] = (rand()%b) + a;
        }
    }
}

void Matrix::printMatrix(ostream &os) const {
    for(int i = 0; i < mRows; ++i){
        for(int j = 0; j < mCols; ++j){
            os << mElements[i][j] << " ";
        }
        os << endl;
    }
}

bool Matrix::isSquare() const {
    if(this->mCols == this->mRows){
        return true;
    }
    else return false;
}



Matrix operator+(const Matrix &x, const Matrix &y) {
    if(x.mRows == y.mRows && x.mCols == y.mCols){
        Matrix sum(x.mRows,x.mCols);
        for(int i = 0; i <x.mRows; ++i){
            for(int j = 0; j < x.mCols; ++j){
                sum.mElements[i][j] = x.mElements[i][j] + y.mElements[i][j];
            }
        }
        return sum;
    }
    throw runtime_error("The matrices don't have the same dimension!");

}

Matrix operator*(const Matrix &x, const Matrix &y) {
    if(x.mRows == y.mRows && x.mCols == y.mCols){
        Matrix multi(x.mRows,x.mCols);
        for(int i = 0; i < x.mRows; ++i){
            for(int j = 0; j < x.mCols; ++j){
                for(int k = 0; k <x.mCols; ++k){
                    multi[i][j] += x.mElements[i][k] * y.mElements[k][j];
                }
            }
        }
        return multi;
    }
    throw runtime_error("The matrices don't have the same dimension!");

}

istream &operator>>(istream &is, Matrix &mat){
    for(int i = 0; i < mat.mRows; ++i){
        for(int j = 0; j < mat.mCols; ++j){
            is >> mat.mElements[i][j];
        }

    }
    return is;
}

ostream &operator<<(ostream &os, const Matrix &mat){
    mat.printMatrix(os);
    return os;
}

Matrix &Matrix::operator=(const Matrix &mat) {
    this -> mRows = mat.mRows;
    this -> mCols = mat.mCols;
    for(int i = 0; i < mat.mRows; ++i){
        for(int j = 0; j < mat.mCols; ++j){
            this->mElements[i][j] = mat.mElements[i][j];
        }
    }
    return *this;
}

Matrix &Matrix::operator=(Matrix &&mat) {
    mElements = mat.mElements;
    mRows  =mat.mRows;
    mCols = mat.mCols;
    mat.mElements = nullptr;
    mat.mRows = 0;
    mat.mCols = 0;
    return *this;
}

double * Matrix::operator [] (int index){
    return mElements[index];
}

double * Matrix::operator [] (int index) const{
    return mElements[index];
}


