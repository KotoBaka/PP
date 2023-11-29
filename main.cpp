#include <bitset>
#include <iostream>

// "rotl" означает "вращать влево"
std::bitset<4> rotl(std::bitset<4> bits)
{
	std::bitset<4> mask {0b1000};
	std::bitset<4> buf{bits};
	buf |= mask;
	if (buf != bits)
		return (bits << 1);
	else
		bits <<= 1;
		bits.flip(0);
		return (bits);
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}