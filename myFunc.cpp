#include <iostream>
#include "constants.h"

double calculateH(double h, int t)
{
	double s{}; // расстояние падения
	s = (g * pow(t, 2)) / 2;

	return h - s;
}
