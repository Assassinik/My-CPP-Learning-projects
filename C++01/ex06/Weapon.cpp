#include "Weapon.hpp"

std :: string weapon :: get_type() const
{
	return this->type;
}
void weapon :: set_type(std :: string type)
{
	this->type = type;
}