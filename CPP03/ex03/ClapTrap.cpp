#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	name("NoName"), hit(10), energy(10), damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :	name(name), hit(10), energy(10), damage(0)
{
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(int hit, int energy, int damage, std::string name) :	name(name), hit(hit),
																		energy(energy), damage(damage)
{
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& hero) :	name(hero.name), hit(hero.hit),
										energy(hero.energy), damage(hero.damage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap &hero)
{
	name = hero.name;
	hit = hero.hit;
	energy = hero.energy;
	damage = hero.damage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Done with ClapTrap " << name << std::endl;
}


void 	ClapTrap::attack(const std::string &target)
{
	if (hit <= 0)
		std::cout << target <<  " is already dead! Stop it!" << std::endl;
	else if (!energy)
		std::cout << name << " has no energy points left, so can't attack. What a pity!" << std::endl;
	else
	{
		std::cout << name << " attacks " << target
					<< ", causing " << damage << " points of damage!" << std::endl;
		--energy;
	}
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit <= 0)
		std::cout.write(getName().c_str(), getName().length() - 10)
			<< " is already dead! Stop it!" << std::endl;
	else
	{
		hit -= amount;
		std::cout.write(getName().c_str(), getName().length() - 10)
			<< " takes " << amount << " points of damage.";
		if (hit <= 0) {
			std::cout << " Now ";
			std::cout.write(getName().c_str(), getName().length() - 10) << " is dead!";
		}
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit <= 0)
		std::cout.write(getName().c_str(), getName().length() - 10)
			<< " is already dead, so can't recover." << std::endl;
	else if (!energy)
		std::cout.write(getName().c_str(), getName().length() - 10)
			<< " doesn't have enough energy points to repair." << std::endl;
	else
	{
		--energy;
		hit += amount;
		std::cout.write(getName().c_str(), getName().length() - 10)
			<< " recovers " << amount << " hit points." << std::endl;
	}
}

const std::string&	ClapTrap::getName() const
{
	return name;
}

int	ClapTrap::getHit() const
{
	return hit;
}

int	ClapTrap::getEnergy() const
{
	return energy;
}

int	ClapTrap::getDamage() const
{
	return damage;
}