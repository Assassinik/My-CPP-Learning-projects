#include "FragTrap.hpp"

FragTrap :: FragTrap(std :: string name) : ClapTrap(name)
{
	this->name = name;
	this->set_attack_damage(this->attackDameg);
	this->set_energy_point(this->energyPoint);
	this->set_hit_point(this->hit_Point);
	this->set_name(this->name);
}

FragTrap :: FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	this->name = copy.name;
}

FragTrap & FragTrap :: operator=(const FragTrap &src)
{
	this->name = src.name;
	return *this;
}

void FragTrap :: highFivesGuys(void)
{
	std :: cout << "high fives guys!!!!" << std :: endl;
}

int FragTrap :: gethit() const
{
	return this->hit_Point;
}

int FragTrap :: getattack() const
{
	return this->attackDameg;
}
