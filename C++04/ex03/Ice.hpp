#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const& copy);
		Ice& operator=(Ice const& src);
		std :: string const& getType() const;
		Ice* clone() const;
		void use(ICharacter& target);
	private:
		std :: string type;
};
#endif 