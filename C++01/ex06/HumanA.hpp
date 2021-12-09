#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class humanA
{
	public:
		humanA(std::string const &name, weapon &weapons);
		~humanA(){}
	private:
	std :: string name;
	weapon &weapons;
	public:
		std :: string get_name()const;
		void init_name(std :: string);
		void attack();
};
#endif