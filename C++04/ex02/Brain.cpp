#include "Brain.hpp"

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copy constructor  called :" << std::endl;
	*this = copy;
}
std::string* Brain::get_array()
{
	return this->brain;
}

void Brain::print_array()
{
	for (size_t i = 0; i < this->size; i++)
	{
		std::cout << this->brain[i] << std::endl;
	}
}
