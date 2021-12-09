#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

class Zombie
{
	public:
		Zombie(){}
		Zombie(std :: string name, std :: string type);
		~Zombie(){}
	private:
		std :: string name;
		std :: string type;
	public:
		void set_init(std::string name, std::string type);
		std :: string get_name(void) const;
		std :: string get_type(void)const;
		void announce()const;
};

#endif