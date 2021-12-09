#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character(std :: string name);
	Character(Character const& copy);
	~Character();
	Character& operator=(Character const& src);
	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria* getMateriaFromInventory(int idx);
private:
	AMateria* (inventory[5]);
	std::string const	name;
};

#endif