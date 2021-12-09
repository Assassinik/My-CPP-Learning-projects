#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std :: string s1 = "blbul";
	std :: string s2 = "dldul";
	std :: string s3 = "zuzuzuzuzu";
	std :: string s4 = "blobloblo";

	DiamondTrap	diamondtrap(s4);
	std :: cout << std::endl;

	diamondtrap.ClapTrap :: takeDamage(14);
	diamondtrap.ClapTrap :: beRepaired(18);
	std :: cout << std :: endl;

	diamondtrap.ClapTrap :: attack(s2);
	diamondtrap.ClapTrap :: attack(s2);
	diamondtrap.ClapTrap :: attack(s2);
	std :: cout << std :: endl;

	diamondtrap.guardGate();
	diamondtrap.ClapTrap :: attack(s2);
	std :: cout << std :: endl;

	
	diamondtrap.highFivesGuys();
	std :: cout << std :: endl;

	diamondtrap.whoAmi();
	std :: cout << std :: endl;

	diamondtrap.ClapTrap :: beRepaired(18);

	diamondtrap.ClapTrap :: takeDamage(50);

	diamondtrap.ClapTrap :: takeDamage(50);


	diamondtrap.ClapTrap :: beRepaired(20);
	diamondtrap.ClapTrap :: attack(s2);

	std :: cout << std :: endl;
	return (0);
}