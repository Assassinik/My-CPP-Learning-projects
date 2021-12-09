#include "HumanA.hpp"

humanA :: humanA(std::string const &name, weapon &weapons):name(name), weapons(weapons)
{
	std::cout << std :: endl;
}
void humanA :: init_name(std :: string name)
{
	this->name = name;
}
std :: string humanA :: get_name()const
{
	return this->name;
}
void humanA :: attack()
{
	std :: cout << this->name << " " << "attacks with his " << this->weapons.get_type() << std::endl;
}