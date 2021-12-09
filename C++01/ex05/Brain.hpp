#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class brain
{
	public:
		brain(){}
		brain(brain const & copy)
		{
			*this = copy;
		}
		~brain(){}
		unsigned long identify() const;
};
#endif