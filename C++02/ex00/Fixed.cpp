#include "Fixed.hpp"

fixed :: fixed() :point(0)
{
	std :: cout << "Default constructor called" << std :: endl;
}
int fixed :: getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std :: endl;
	return(this->point);
}
void fixed :: setRawBits(int const raw)
{
	std :: cout << "setRawBits member function called" << std :: endl;
	this->point = raw;
}
fixed :: fixed(fixed  const& copy)
{
	std :: cout << "Copy constructor called" << std :: endl;
	this->point = copy.getRawBits();
}
fixed& fixed :: operator=(fixed const& copy)
{
	std :: cout << "Assignation operator called" << std :: endl;
	this->point = copy.getRawBits();
	return (*this);
}