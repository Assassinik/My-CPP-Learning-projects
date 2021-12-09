#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :    public ClapTrap
{
public:
	ScavTrap()
	{
		std::cout << "Default ScavTrap constructor called" << std::endl;
	}
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator=(const ScavTrap& src);
	~ScavTrap()
	{
		std::cout << "ScavTrap Destructor called" << std::endl;
	}
private:
	std::string name;
public:
	void re_set_name(std::string name);
	void re_set_hit_point(int n);
	void re_set_energy_point(int n);
	void re_set_attack_damage(int n);
	void guardGate();
};
#endif

