#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {};

Weapon::~Weapon() {};

std::string const& Weapon::getType(void)
{
	return type;
}

void	Weapon::setType(std::string _type)
{
	type = _type;
}