#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	public:
		DiamondTrap(std :: string name);
		DiamondTrap (DiamondTrap const &copy);
		DiamondTrap &operator=(DiamondTrap const &src);
		~DiamondTrap()
		{
			std :: cout << "DiamondTrap Destructor called:" << std :: endl;
		}
	private:
		std :: string name;
		int energypoint;
	public:
		int attackdamage;
		int hitpoint;
		using ScavTrap :: attack;
		void whoAmi();
};
#endif