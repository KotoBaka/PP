#include <iostream>
#include "constants.h"

double calculateH(double h, int t)
{
	double s{}; // ���������� �������
	s = (g * pow(t, 2)) / 2;

	return h - s;
}
