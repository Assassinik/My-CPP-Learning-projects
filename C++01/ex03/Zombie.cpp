#include "Zombie.hpp"
Zombie :: Zombie(std::string name, std::string type)
{
	set_init(name,type);
}
void Zombie :: announce(void) const
{
	std :: cout << std :: left << this->name << ":" << "(" << this->type << ")" << " Braiiiiiiinnnssss" << std::endl;
}
std :: string Zombie :: get_name(void) const
{
	return name;
}
std :: string Zombie :: get_type(void)const
{
	return type;
}
void Zombie :: set_init(std :: string name, std :: string type)
{
	this->name = name;
	this->type = type;
}