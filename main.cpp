#include <iostream>

void bitout(int numb)
{

	int c{ 128 };
	do {

		if (c == 8) std::cout << ' ';
		if (numb >= c)
		{
			numb -= c;
			c /= 2;
			std::cout << 1;
		}
		else
		{
			c /= 2;
			std::cout << 0;
		}

	} while (c > 0);

}

int main()
{
	int numb;
	std::cout << "enter a integer number from 0 to 255\n" << "number: ";
	std::cin >> numb;

	if (numb > 255)
		std::cout << "number greater than 255";
	else
	{
		std::cout << numb << " in 8-bit form: ";
		bitout(numb);
	}
	return 0;
}