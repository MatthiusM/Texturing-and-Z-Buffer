#pragma once
#include <vector>
#include <ostream>
#include "geometry.h"


class Matrix
{
	std::vector<std::vector<float>> m;
	int rows, cols;
public:
	//Matrix of 0s, with  specified (or default) row and column
	Matrix(int _rows = 4, int _cols = 4);
	Matrix(Vec3i v); //store a vector in a matrix object with w
	int num_rows(); //getter for rows
	int num_cols(); //getter for cols
	static Matrix identity(int dimensions); //return the identity
	std::vector<float>& operator[](const int i); //return a row of matrix
	//return a matrix multiplication result
	Matrix transpose(); // return the tramspose of a matrix
	Matrix inverse(); // calculate the inverse of a matrix
	friend std::ostream& operator<<(std::ostream& s, Matrix& m); //print matrix
};