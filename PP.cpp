#include <iostream>
#include "io.h"


int main()
{
	double v1 { Value() };
	double v2 { Value() };

	std::cout << "Enter one of the following: +, -, *, or /: ";
	char op{};
	std::cin >> op;

	std::cout << v1 << op << v2 << " is " << Calculate(v1, op, v2);

	return 0;
}