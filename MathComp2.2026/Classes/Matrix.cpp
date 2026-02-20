#include "Matrix.h"

Matrix::Matrix()
{
}

void Matrix::read()
{
}

void Matrix::print()
{
	for (int i = 0; i < M; i++)
	{
		std::cout << A[i] << "\n";
	}
}

Matrix Matrix::multiply(Matrix other)
{
	return Matrix();
}

Matrix Matrix::transpose()
{
	return Matrix();
}

double Matrix::determinant()
{
	return 0.0;
}

Matrix Matrix::inverse()
{
	return Matrix();
}

Vector3D Matrix::multiply(Vector3D v)
{
	return Vector3D();
}
