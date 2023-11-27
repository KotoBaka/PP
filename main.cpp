#include <iostream>
#include <cstdint>
#include "myFunc.h"
#include "constants.h"

int main()
{
	std::cout << "Enter the height of the tower in meters: ";
	double h{};		// Высота (метры)
	std::cin >> h;
	uint_fast16_t t{};		// Время в падении (секунды)

	for (; t <= 5; t++)
	{
		if (calculateH(h, t) > 0)
			std::cout << "At " << t << " seconds, the ball is at height : " << calculateH(h, t) << " meters\n";
		else 
			std::cout << "At " << t << " seconds, the ball is on the ground\n";
	}

	return 0;
}
