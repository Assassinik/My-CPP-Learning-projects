#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal()
	{
		std::cout << "Default WrongAnimal constructor called :" << std::endl;
	}
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal &operator=(WrongAnimal const &src);
	virtual ~WrongAnimal()
	{
		std::cout << "Default WrongAnimal Destructors called  :" << std::endl;
	}
public:
	void setType(std::string type);
	std::string getType()const;
	void makeSound()const;
};
#endif