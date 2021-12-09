#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "HaffHaff :" << std::endl;
}

Dog::Dog()
{
	std::cout << "Dog constructor called :" << std::endl;
	this->set_inittype("Dog");
}

Dog :: ~Dog()
{
	std::cout << "Dog Destructors called :" << std::endl;
}
