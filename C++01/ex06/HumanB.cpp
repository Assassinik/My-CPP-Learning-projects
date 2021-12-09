#include "HumanB.hpp"

void humanB::init_name(std::string name)
{
	this->name = name;
}
std::string humanB::get_name()const
{
	return this->name;
}
void humanB :: setWeapon(weapon &weapons)
{
	this->weapons = &weapons;
}
void humanB :: attack()
{
	std::cout << this->name << "attacks with his " << this->weapons->get_type() << std::endl;
}
