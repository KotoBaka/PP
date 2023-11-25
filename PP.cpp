#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::cout << "Enter your full name: ";
	std::string nm{};
	std::getline(std::cin >> std::ws, nm);

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	std::cout << "You've lived " << static_cast <double>(age)/ static_cast <double>(nm.length()) << " years for each letter in your name";

	return 0;
}