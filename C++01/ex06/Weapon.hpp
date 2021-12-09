#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class weapon
{
	public:
		weapon(){}
		weapon(std :: string type) 
		{
			this-> type = type;
		}
		weapon(const weapon& copy)
		{
			*this = copy;
		}
		~weapon(){}
	private:
		std :: string type;
	public:
		std :: string get_type() const;
		void set_type(std :: string type);
};
#endif
