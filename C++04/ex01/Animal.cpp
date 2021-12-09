#include "Animal.hpp"

Animal :: Animal(Animal const &copy)
{
	std :: cout << "Animal Copy constructor called:" << std :: endl;
	*this = copy;
}

Animal & Animal :: operator=(Animal const &src)
{
	std :: cout << "Animal Assignment operator called" << std :: endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

void Animal :: set_inittype(std :: string type)
{
	this->type = type;
}

std :: string Animal :: get_type() const
{
	return this->type;
}

void Animal :: makeSound()const
{
	std :: cout << "Animal sssound " << std :: endl;
}
