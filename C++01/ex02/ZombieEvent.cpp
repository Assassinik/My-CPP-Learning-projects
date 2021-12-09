#include "ZombieEvent.hpp"

void ZombieEvent :: set_ZombieType(std :: string type)
{
	this->type = type;
}
Zombie* ZombieEvent :: newZombie(std :: string name)
{
	return (new Zombie(name, this->type));
}