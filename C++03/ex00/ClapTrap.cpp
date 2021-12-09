#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : attack_damage(0)
{
	this->hit_point = this->max_hit_point;
	this->energy_point = this->max_energy_point;
	std :: cout << "Default ClapTrap constructro called:" << std :: endl;
}

ClapTrap :: ClapTrap(std::string name) : name(name)
{
	std :: cout << "Parametric ClapTrap constructor called" << std :: endl;
}

ClapTrap :: ClapTrap(const ClapTrap &copy)
{
	std :: cout << "ClapTrap Copy constructor called" << std :: endl;
	*this = copy;
}

ClapTrap & ClapTrap :: operator=(const ClapTrap &src)
{
	std :: cout << "ClapTrap assignment operator called" << std :: endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hit_point = src.hit_point;
		this->energy_point = src.max_energy_point;
		this->attack_damage = src.attack_damage;
	}
	return *this;
}

void ClapTrap :: attack(std :: string const &target)
{
	std :: cout << "ClapTrap :" << this->get_name() <<" Attack :" << target << ", called :" << get_attack_damage() << " Point of Damage!!" << std::endl;
}

void ClapTrap :: takeDamage(unsigned int amount)
{
	this->energy_point -= this->get_hit_point();
	std :: cout << "ClapTrap :" << this->get_name() << " takes :" << amount << " points of damage!!!" << std :: endl;
}

void ClapTrap :: beRepaired(int amount)
{
	int n = this->energy_point;
	if (amount <= n)
	{
		this->energy_point += n - amount;
	}
	else
	{
		this->energy_point = n;
	}
	std :: cout << "ClapTrap :" << this->get_name() << " repares :" << amount << " hitpoints!!! " << std :: endl;
}

void ClapTrap :: set_energy_point(const int max_energy_point)
{
	this->energy_point = max_energy_point;
}

void ClapTrap :: set_hit_point(const int max_hit_point)
{
	this->hit_point = max_hit_point;
}

void ClapTrap :: set_attack_damage(int attack_damage)
{
	this->attack_damage = attack_damage;
}

int ClapTrap :: get_energy_point(void)
{
	return this->energy_point;
}

int ClapTrap :: get_hit_point(void)
{
	return this->hit_point;
}

int ClapTrap :: get_attack_damage(void)
{
	return this->attack_damage;
}

std :: string ClapTrap :: get_name(void)
{
	return this->name;
}
