#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap :: DiamondTrap(std :: string name) : ScavTrap(name), FragTrap(name)
{
	this->energypoint = ScavTrap :: get_energy_point();
	this->attackdamage = getattack();
	this-> hitpoint = gethit();
	this->name = name;
	std :: cout << "DiamondTrap " << name << "Welcome the room!" << std :: endl;
}

DiamondTrap :: DiamondTrap(const DiamondTrap &copy) : ScavTrap(copy.name), FragTrap(copy.name)
{
	this->name = getname();
}

DiamondTrap &DiamondTrap :: operator=(DiamondTrap const &src)
{
	this->name = src.name;
	return *this;
}
void DiamondTrap :: whoAmi()
{
	std :: cout << "DiamondTrap name is " << this-> name << std :: endl;
	std :: cout << "ClapTrap name is " << ClapTrap :: get_name() << std :: endl;
}
