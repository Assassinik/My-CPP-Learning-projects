#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(std :: string name)
{
	std :: cout << "Parametric ScavTrap constructor called" << std :: endl;
	this->name = name;
	re_set_name(this->name);
}

ScavTrap :: ScavTrap(ScavTrap const &copy)
{
	std :: cout << "ScavTrap Copy constructor called" << std :: endl;
	*this = copy;
}

ScavTrap & ScavTrap :: operator=(ScavTrap const &src)
{
	std :: cout << "ScavTrap assignment operator called" << std :: endl;
	if (this != &src)
	{
		this->name = src.name;
	}
	return *this;
}

void ScavTrap :: re_set_name(std :: string name)
{
	set_name(name);
}

void ScavTrap :: re_set_hit_point(int n)
{
	set_hit_point(n);
}

void ScavTrap :: re_set_energy_point(int n)
{
	set_energy_point(n);
}

void ScavTrap :: re_set_attack_damage(int n)
{
	set_attack_damage(n);
}

void ScavTrap :: guardGate()
{
	if (this->get_hit_point() > 0)
	{
		std :: cout << "ScavTrap " << this->get_name() << " have enterred in Gate keeper mode." << std :: endl;
	}
	else
	{
		std :: cout << "ScavTrap " << this->get_name() << "'s hit point is " << this->get_hit_point() << "." << std :: endl;
	}
}

std :: string ScavTrap :: getname()
{
	return get_name();
}
