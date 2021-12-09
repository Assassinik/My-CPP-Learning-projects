#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
class Zombie;

class ZombieEvent
{
	public:
		ZombieEvent()
		{
			type = "\0";
		}
		~ZombieEvent() {}
		ZombieEvent(const ZombieEvent& copy)
		{
			*this = copy;
		}
	private:
		std :: string type;
	public:
		void set_ZombieType(std :: string type);
		Zombie* newZombie(std :: string name);;
};

#endif