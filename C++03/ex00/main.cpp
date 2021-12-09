#include "ClapTrap.hpp"


int	main(void)
{
	std::string s1 = "Assassin";
	std::string s2 = "Tank";

	ClapTrap claptrap1(s1);
	ClapTrap claptrap2(s2);
	std :: cout << "Player1 is ->" << s1 << std :: endl;
	std :: cout << "Player2 is ->" << s2 << std :: endl;

	std :: cout << std :: endl;
	claptrap1.set_attack_damage(2);
	claptrap2.set_attack_damage(1);
	claptrap1.set_energy_point(100);
	claptrap2.set_energy_point(150);
	claptrap1.set_hit_point(5);
	claptrap2.set_hit_point(5);


	claptrap1.attack(s2);
	claptrap2.takeDamage(claptrap2.get_hit_point());
	claptrap2.beRepaired(2);
	claptrap2.beRepaired(18);

	claptrap2.attack(s1);
	claptrap1.takeDamage(claptrap1.get_hit_point());
	claptrap2.attack(s1);
	claptrap1.takeDamage(claptrap1.get_hit_point());
	claptrap2.attack(s1);

	claptrap1.beRepaired(3);
	claptrap1.beRepaired(64);
	std :: cout << std :: endl;
}