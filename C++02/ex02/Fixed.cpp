#include "Fixed.hpp"


Fixed :: Fixed() :point(0)
{
	/*std :: cout << "Default constructor called" << std :: endl;*/
}
int Fixed :: getRawBits(void)const
{
	/*std :: cout << "getRawBits member function called" << std :: endl;*/
	return(this->point);
}
void Fixed :: setRawBits(int const raw)
{
	/*std :: cout << "setRawBits member function called" << std :: endl;*/
	this->point = raw;
}
Fixed :: Fixed(Fixed  const& copy)
{
	/*std :: cout << "Copy constructor called" << std :: endl;*/
	this->point = copy.getRawBits();
}
Fixed & Fixed :: operator=(Fixed const& copy)
{
	/*std :: cout << "Assignation operator called" << std :: endl;*/
	this->point = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const int arg)
{
	/*std::cout << "Int constructor called" << std::endl;*/
	this->point = (arg << this->point);
}

float Fixed :: toFloat(void) const
{
	return ((this->point / (float)(1 << this->point)));
}

int Fixed :: toInt(void) const
{
	return (this->point >> this->point);
}

Fixed :: Fixed(const float floater)
{
	/*std::cout << "Float constructor called" << std :: endl;*/
	this->point = roundf(floater * (1 << this->point));
}
std :: ostream &operator<<(std::ostream &stream, const Fixed &copy)
{
	stream << copy.toFloat();
	return (stream);
}

bool Fixed :: operator>(const Fixed& src) const
{
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed :: operator<(const Fixed& src) const
{
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed :: operator>=(const Fixed& src) const
{
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed :: operator<=(const Fixed& src) const
{
	return (this->getRawBits() <= src.getRawBits());
}

bool Fixed :: operator==(const Fixed& src) const
{
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed :: operator!=(const Fixed& src) const
{
	return (this->getRawBits() != src.getRawBits());
}

Fixed& Fixed :: operator++(void)
{
	/*std :: cout << "a++ increment" << std :: endl;*/
	point += 1;
	return *this;
}

Fixed Fixed :: operator++(int)
{
	/*std :: cout << "++a increment" << std :: endl;*/
	Fixed a = *this;
	++*this;
	return a;
}

Fixed& Fixed :: operator--(void)
{
	/*std :: cout << "a-- increment" << std :: endl;*/
	point -= 1;
	return *this;
}

Fixed Fixed :: operator--(int)
{
	/*std :: cout << "--a increment" << std :: endl;*/
	Fixed a = *this;
	--* this;
	return a;
}

Fixed Fixed :: operator+(const Fixed& src)
{
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed :: operator-(const Fixed& src)
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed :: operator*(const Fixed& src)
{
	return (Fixed(this->toFloat() * src.toFloat()));;
}

Fixed Fixed :: operator/(const Fixed& src)
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

const Fixed& Fixed :: max(const Fixed &a, const Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
	{
		return a;
	}
	else if (a.getRawBits() == b.getRawBits())
	{
	return a;
	}
	else
	{
	return b;
	}
}

const Fixed& Fixed :: min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
	{
		return a;
	}
	else if (a.getRawBits() == b.getRawBits())
	{
		return a;
	}
	else
	{
		return b;
	}
}
