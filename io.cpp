#include <iostream>

double Value()
{
	std::cout << "Enter a double value: ";
	double value{};
	std::cin >> value;
	return value;
}

double Calculate(double v1, char op, double v2)
{
	if (op == '+')
		return v1 + v2;
	else if (op == '-')
		return v1 - v2;
	else if (op == '/')
		return v1 / v2;
	else if (op == '*')
		return v1 * v2;
}