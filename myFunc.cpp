#include <iostream>
#include "constants.h"
#include <cmath>

double calculateH(double h, int t)
{
	double s{};		// ðàññòîÿíèå ïàäåíèÿ
	s = (g * pow(t, 2)) / 2;

	return h - s;
}
