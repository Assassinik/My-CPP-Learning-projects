#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& src);
	~ClapTrap()
	{
		std::cout << "ClapTrap Destructor called" << std::endl;
	}
private:
	std::string name;
	const static int max_hit_point = 10;
	const static int max_energy_point = 10;
	int hit_point;
	int energy_point;
	int attack_damage;
public:
	void attack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(int amount);
	void set_energy_point(int max_energy_point);
	void set_hit_point(int max_hit_point);
	void set_attack_damage(int attack_damage);
	int get_energy_point(void);
	int get_hit_point(void);
	int get_attack_damage(void);
	void set_name(std::string name);
	std::string get_name(void);
};
#endif

