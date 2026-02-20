#pragma once
#include <iostream>
#include "Vector3D.h"

class Matrix
{

public: 
    Matrix();
    void read();
    void print();
    Matrix multiply(Matrix other);
    Matrix transpose();
    double determinant();
    Matrix inverse();
    Vector3D multiply(Vector3D v);
private:
    static const int M = 10; //Max rowns for this array
    static const int N = 10; //Max columns in this array
    double A[M][N];
    int m; // actual number of rows (the one people can affect)
    int n; // actual number of columns

};

