#include <iostream>

int readNumber()
{
	int x{};
	std::cout << "enter number\n";
	std::cin >> x;
	return x;
}

void writeAnswer(int A)
{
	std::cout << A;
}