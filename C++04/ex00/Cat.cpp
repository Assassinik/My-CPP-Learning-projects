#include "Cat.hpp"

void Cat :: makeSound() const
{
	std :: cout << "Miiiaaaauuu :" << std :: endl;
}

Cat :: Cat()
{
	std :: cout << "Cat constructor called :" << std :: endl;
	this->set_inittype("Cat");
}

Cat :: ~Cat()
{
	std :: cout << "Cat  Destructors called :" << std :: endl;
}
