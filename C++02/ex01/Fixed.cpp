#include "Fixed.hpp"

Fixed :: Fixed() :point(0)
{
	std::cout << "Default constructor called" << std :: endl;
}

Fixed & Fixed :: operator=(Fixed const & base)
{
	std :: cout << "Assignation operator called" << std :: endl;
	this->point = base.getRawBits();
	return (*this);
}
Fixed :: Fixed(const int integer)
{
	std :: cout << "Int constructor called" << std :: endl;
	this->point = (integer << this->n);
}

Fixed :: Fixed(const float floater)
{
	std :: cout << "Float constructor called" << std :: endl;
	this->point = roundf(floater * (1 << this->n));
}

int Fixed :: getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std :: endl;
	return(this->point);
}

void Fixed :: setRawBits(int const raw)
{
	std :: cout << "setRawBits member function called" << std :: endl;
	this->point = raw;
}

Fixed :: Fixed(Fixed  const &copy)
{
	std :: cout << "Copy constructor called" << std :: endl;
	this->point = copy.getRawBits();
}

float Fixed :: toFloat(void) const
{
	return ((this->point / (float)(1 << this->n)));
}

int Fixed :: toInt(void) const
{
	return (this->point >> this->n);
}
std :: ostream & operator<<(std :: ostream & o, Fixed const & hmm)
{
	o << hmm.toFloat();
	return (o);
}