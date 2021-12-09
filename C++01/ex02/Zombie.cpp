#include "Zombie.hpp"

Zombie ::  Zombie(std :: string type,std :: string name): name(name), type(type)
{
	this->name = name;
	Zombie :: annocune();
}
void Zombie :: annocune(void) const
{
	std :: cout << std :: left << this->name <<":"<< "(" << this->type << ")" << " Braiiiiiiinnnssss" << std::endl;
}
std::string Zombie :: get_name(void) const
{
	return name;
}
std :: string Zombie :: get_type(void) const
{
	return type;
}