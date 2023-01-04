#pragma once
#include "framework.h"
#include <string>
#include <sstream>
#include <codecvt>
#include <iomanip>

class MatrixDeterminant
{
private:
	MatrixDeterminant() {}
	MatrixDeterminant(const MatrixDeterminant& root) = delete;
	MatrixDeterminant& operator = (const MatrixDeterminant&) = delete;

	double det = 0;
	int N = 0;
	std::string matrixText = "";
	int** matrix = 0;
public:
	static MatrixDeterminant& getInstance()
	{
		static MatrixDeterminant instance;
		return instance;
	}

	void OnCreate(HWND);

	int GetFromClipboard(HWND, long);
	int** GetMatrix(std::string);
	void GetSubmatrix(int**, int**, int, int, int);
	int GetDet(int**, int);

	void OnPaint(HWND, HDC);
};