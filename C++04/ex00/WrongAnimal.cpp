#include "WrongAnimal.hpp"

WrongAnimal :: WrongAnimal (WrongAnimal const& copy)
{
	std :: cout << "WrongAnimal Copy constructor called:" << std :: endl;
	*this = copy;
}

WrongAnimal & WrongAnimal :: operator=(WrongAnimal const &src)
{
	std :: cout << "WrongAnimal Assignment operator called" << std :: endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

void WrongAnimal :: setType(std :: string type)
{
	this->type = type;
}

std::string WrongAnimal :: getType() const
{
	return this->type;
}

void WrongAnimal :: makeSound()const
{
	std :: cout << "WrongAnimal sssound " << std :: endl;
}

