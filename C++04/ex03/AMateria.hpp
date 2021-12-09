#ifndef AMATERIAL_HPP
#define AMATERIAL_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		const std :: string type;
	public:
		AMateria();
		AMateria(std :: string const& type);
		AMateria(AMateria const &copy);
		virtual ~AMateria();
	public:
		virtual std :: string const& getType()const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif