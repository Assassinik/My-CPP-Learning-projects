#include "Human.hpp"

int main(void)
{
	human bob;
	std :: cout << "0x" << bob.identify() << std::endl;
	std :: cout << "0x" << bob.getBrain().identify() << std::endl;
}