#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(100, 50, 20, name)
{
	std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &hero) : ClapTrap(hero.hit, hero.energy, hero.damage, hero.name)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap &hero)
{
	name = hero.name;
	hit = hero.hit;
	energy = hero.energy;
	damage = hero.damage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Done with ScavTrap " << name << std::endl;
}

void 	ScavTrap::attack(const std::string &target)
{
	if (hit <= 0)
		std::cout << "ScavTrap " << target <<  "'s already dead! Stop it!" << std::endl;
	else if (energy == 0)
		std::cout << "ScavTrap " << name
					<< " has no energy points left, so can't attack. What a pity!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << name << " attacks "
					 << target << ", causing " << damage << " points of damage!" << std::endl;
		--energy;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is in Gate keeper mode" << std::endl;
}