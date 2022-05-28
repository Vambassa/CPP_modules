#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {};

HumanB::~HumanB() {};

void	HumanB::attack()
{
	if (!weapon)
		std::cout << name << " attacks with bare hands and hopes in god " << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}