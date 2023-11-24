#include <iostream>

bool isPrimeNumb(int x)
{
if (x > 1)
	if (x % 2 != 0 && x % 3 != 0 && x % 5 != 0 && x % 7 != 0)
	return true;

return false;
}

int main()
{
	int pNumb;
	std::cout << "Enter a a prime number\n";
	std::cin >> pNumb;

	if (isPrimeNumb(pNumb) == 1)
		std::cout << "The digit is prime";
	else
		std::cout << "The digit is not prime";
	return 0;
}