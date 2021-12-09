#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std :: string type;
	public:
		Animal()
		{
			std :: cout << "Default Animal constructor called :" << std :: endl;
		}
		Animal(Animal const &copy);
		Animal &operator=(Animal const &src);
		virtual ~Animal()
		{
			std :: cout << "Animal Destructors called :" << std :: endl;
		}
	public:
		void set_inittype(std :: string type);
		std :: string get_type() const;
		virtual void makeSound()const;
};
#endif