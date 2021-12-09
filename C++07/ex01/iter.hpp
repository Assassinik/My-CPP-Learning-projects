#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename type>
void iter(type* a, size_t b, void(*f)(type const&))
{
	for (size_t i = 0; i < b; i++)
	{
		(*f)(a[i]);
	}
}

template< typename Type>
void	display(Type const& t)
{
	std::cout << t << " ";
}
template< typename Type>
void tests(Type t, size_t len, std::string type)
{
	std::cout << std::endl << type << std::endl;
	iter(t, len, display);
	std::cout << std::endl << std::endl;
}
#endif