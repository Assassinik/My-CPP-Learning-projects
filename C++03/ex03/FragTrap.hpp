#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap()
	{
		std :: cout << "FragTrap Constructor called:" << std :: endl;
	}
	FragTrap(std :: string name);
	FragTrap(const FragTrap &copy);
	FragTrap &operator=(const FragTrap &src);
	~FragTrap()
	{
		std :: cout << "FragTrap Destructor called:" << std :: endl;
	}
private:
	std :: string name;
	static const int hit_Point = 100;
	static const int energyPoint = 100;
	static const int attackDameg = 30;
public:
	void highFivesGuys(void);
	int gethit()const;
	int getattack()const;
};
#endif