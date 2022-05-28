#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define SLOT_SIZE 4

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : virtual public ICharacter
{
public:
	Character();
	Character(std::string name);
	Character(const Character& one);
	Character&	operator = (const Character& one);
	virtual ~Character();

	virtual std::string const &	getName() const;
	virtual AMateria*			getMateria(int idx);
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

private:
	std::string		name;
	AMateria        *slot[SLOT_SIZE];
};

#endif
