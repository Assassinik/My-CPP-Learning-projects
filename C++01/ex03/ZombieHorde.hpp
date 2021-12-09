#ifndef ZOMBIEHORDE_HPP
#define	ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class Zombie;

class Zombiehorde
{
	public:
		Zombiehorde(int n)
		{
			n = 0;
		}
		Zombiehorde(const Zombiehorde& copy) 
		{
			*this = copy;
		};
		~Zombiehorde(){}
	private:
		int n;
		Zombie *zombie;
	public:
		void announce();
		void set_init(int n);
};
#endif
