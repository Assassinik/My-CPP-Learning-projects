#include "ZombieHorde.hpp"

void Zombiehorde :: set_init(int n)
{
	this->n = n;
	if (n > 0)
	{
		this->zombie = new Zombie[n];
		for (int i = 0; i < n; i++)
		{
			std::string names[10] = { "Zombuk", "Zombchik", "Zomblo", "Zombulik", "Zuzumbi", "Zomblblik","NotZombie", "Zombdog", "IceZombik", "Zoomble" };
			std::string type[6] = { "Assassin","Magician","Warrior","SUPPORT","Doctor","Swordsman"};
			this->zombie[i].set_init(names[rand() % 10], type[rand() % 6]);
		}
	}
}
void Zombiehorde :: announce()
{
	for (int i = 0; i < this->n; i++)
	{
		this->zombie[i].announce();
	}
	delete[] this->zombie;
}