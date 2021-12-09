#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class brain;

class human
{
	public:
		human() {}
		~human() {}
	private:
		const brain wtf;
	public:
		const brain & getBrain();
		unsigned long identify();
};
#endif