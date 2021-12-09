#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class humanB
{

public:
	humanB(std :: string const name){this->name = name;};
	humanB(const humanB& copy)
	{
		*this = copy;
	};
	~humanB() {}
private:
	std::string name;
	weapon *weapons;
public:
	std::string get_name()const;
	void init_name(std::string);
	void setWeapon(weapon &weapons);
	void attack();
};
#endif