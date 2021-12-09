#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <iostream>
#include <list>
#include <vector>

class notfind : public std::exception
{
	public :
		const char* what(void) const throw()
		{ 
			return "not found";
		}
};
template<typename T>
typename T :: iterator easyfind(T& container, int const &b)
{
	typename T :: iterator it = container.begin();
	for (; it != container.end(); ++it)
	{
		if (*it == b)
		{
			return it;
		}
	}
	throw notfind();
	return it;
}

#endif