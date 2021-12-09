#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std :: string s1 = "Killer";
	std :: string s2 = "Miller";
	std :: string s3 = "Triller";

	ClapTrap claptrap(s1);
	ScavTrap scavtrap(s2);
	FragTrap fragtrap(s3);
	std :: cout << std :: endl;

	fragtrap.attack(s2);
	claptrap.attack(s2);
	scavtrap.attack(s1);
	std :: cout << std :: endl;

	fragtrap.attack(s2);
	fragtrap.attack(s2);
	fragtrap.attack(s2);
	fragtrap.attack(s2);
	std :: cout << std :: endl;

	fragtrap.highFivesGuys();
	std :: cout << std :: endl;

	fragtrap.beRepaired(18);

	fragtrap.takeDamage(50);

	fragtrap.takeDamage(50);

	fragtrap.beRepaired(20);
	fragtrap.attack(s2);

	std :: cout << std :: endl;
}