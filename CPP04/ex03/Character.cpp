#include "Character.hpp"

Character::Character()
{
	name = "Default_Character";
	for (int i = 0; i < SLOT_SIZE; ++i)
		slot[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < SLOT_SIZE; ++i)
	{
		if (slot[i])
			delete slot[i];
		slot[i] = NULL;
	}
}

Character::Character(const Character& one)
{
	for (int i = 0; i < SLOT_SIZE; ++i)
	{
		if (slot[i])
			slot[i] = one.slot[i]->clone();
		else
			slot[i] = NULL;
	}
	name = one.name;
}

Character&	Character::operator = (const Character& one)
{
	if (this != &one)
	{
		for (int i = 0; i < SLOT_SIZE; ++i)
		{
			delete slot[i];
			slot[i] = one.slot[i]->clone();
		}
		name = one.name;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < SLOT_SIZE; ++i)
		delete slot[i];
}

std::string const& Character::getName() const
{
	return name;
}

AMateria* Character::getMateria(int idx)
{
	return slot[idx];
}

void	Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < SLOT_SIZE; ++i)
		{
			if (!slot[i])
			{
				slot[i] = m->clone();
				delete m;
				return;
			}
		}
	}
	else
		std::cout << "failed to equip" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > (SLOT_SIZE - 1))
		return ;
	if (slot[idx])
	{
		delete slot[idx];
		slot[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if ((void *)&target == NULL)
	{
		std::cout << "no target" << std::endl;
		return ;
	}
	else if (!slot[idx] || idx < 0 || idx > (SLOT_SIZE - 1))
		std::cout << "failed to use the materia" << std::endl;
	else
	{
		slot[idx]->use(target);
		delete slot[idx];
		slot[idx] = NULL;
	}
}
