#include "Cast.hpp"

Cast :: Cast()
{
	std :: cout << "Default Cast constructor called :" << std :: endl;
}

Cast :: Cast(std :: string str)
{
	this->str = str;
	std :: cout << "Parametric Cast constructor called :" << std :: endl;
}

Cast :: Cast(Cast const & copy)
{
	std :: cout << "Cast copy constructor called :" << std :: endl;
	*this = copy;
}

Cast & Cast :: operator=(Cast const &src)
{
	if (this != &src)
		this->str = src.str;
	return *this;
}

Cast :: ~Cast()
{
	std :: cout << "Cast destructor called :" << std :: endl;
}

std :: string Cast :: getStr() const
{
	return this->str;
}

char Cast :: getChar() const
{
	char a;

	try
	{
		a = static_cast<char>(atof(this->str.c_str()));
	}
	catch (const std :: exception& e)
	{
		throw Cast::ImpossibleException();
	}

	if (a < 32 || a > 126)
		throw Cast :: NonDisplayableException();

	return (a);
}

int Cast :: getInt() const
{
	int a = 0;

	try
	{
		a = (int)::strtol(str.c_str(),NULL,100);
	}
	catch (const std :: exception& e)
	{
		throw Cast :: ImpossibleException();
	}
	return (a);
}

float Cast :: getFloat() const
{
	float a = 0;

	try
	{
		a = (double)atof(this->str.c_str());
	}
	catch (const std :: exception& e)
	{
		throw Cast :: ImpossibleException();
	}
	return (a);
}

double Cast :: getDouble() const
{
	double a = 0;

	try
	{
		a = static_cast<double>((double)atof(this->str.c_str()));
	}
	catch (const std :: exception& e)
	{
		throw Cast :: ImpossibleException();
	}

	return (a);
}

const char * Cast :: NonDisplayableException :: what() const throw()
{
	return "Non displayable";
}

const char * Cast :: ImpossibleException :: what() const throw()
{
	return "Impossible";
}

std :: ostream& operator<<(std :: ostream& a, Cast const& b)
{
	try
	{
		a << "char: " << b.getChar() << std :: endl;
	}
	catch (const std :: exception& e)
	{
		a << e.what() << std :: endl;
	}

	try
	{
		a << "int: " << b.getInt() << std :: endl;
	}
	catch (const std::exception& e)
	{
		a << e.what() << std :: endl;
	}

	try
	{
		a << "float: " << b.getFloat();
		if (b.getFloat() - static_cast<int>(b.getFloat()) == 0)
		{
			a << ".0";
		}
		a << "f" << std :: endl;
	}
	catch (const std :: exception& e)
	{
		a << e.what() << std :: endl;
	}

	try
	{
		a << "double: " << b.getDouble();
		if (b.getDouble() - static_cast<int>(b.getDouble()) == 0)
		{
			a << ".0"; 
		}
		a << std :: endl;
	}
	catch (const std::exception& e)
	{
		a << e.what() << std :: endl;
	}
	return (a);
}
