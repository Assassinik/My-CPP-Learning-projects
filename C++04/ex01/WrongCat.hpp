#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat()
		{
			std :: cout << "Default WrongCat constructor called :" << std :: endl;
			this->setType("WrongCat");
		}
		~WrongCat()
		{
			std :: cout << "Default WrongCat Destructors called :" << std :: endl;
		}
	public:
		void makeSound()const;
};
#endif