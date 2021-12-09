#include "ZombieHorde.hpp"

int main(void)
{
	std::cout << "Hi, if you redy print <START>" << std::endl;
	int n = 0;
	std::cout << "Use zombie horde size" << std::endl;
	std::cin >> n;
	Zombiehorde zombie(n);
	std :: cout << "Zombies coming Hahahah" << std :: endl;
	zombie.set_init(n);
	zombie.announce();
}