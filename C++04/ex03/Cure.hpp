#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const& copy);
		Cure& operator=(Cure const& src);
		std :: string const& getType() const;
		Cure* clone() const;
		void use(ICharacter& target);
	private:
		std :: string type;
};

#endif 