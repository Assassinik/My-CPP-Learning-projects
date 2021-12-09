#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	Brain()
	{
		std::cout << "Default Brain constructor  called :" << std::endl;
	}
	Brain(Brain const &copy);
	virtual ~Brain()
	{
		std::cout << "Default Brain Destructors called  :" << std::endl;
	}
private:
	static const size_t size = 100;
	std::string brain[size];
public:
	std::string* get_array();
	void print_array();
};
#endif