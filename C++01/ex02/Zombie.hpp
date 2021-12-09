#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <time.h>
#include "ZombieEvent.hpp"
#include "utils.hpp"
#include <iomanip>
#include <cstdlib>

class Zombie
{
	public:
		Zombie(){}
		Zombie(std :: string name, std::string type);
		~Zombie(){}
		Zombie(const Zombie& copy) 
		{
			*this = copy;
		}
	private:
		std :: string name;
		std :: string type;
	public:
		void annocune() const;
		std :: string get_name(void) const;
		std :: string get_type(void) const;
};
#endif
