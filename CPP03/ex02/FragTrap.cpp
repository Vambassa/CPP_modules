#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(100, 100, 30, name)
{
	std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &hero) : ClapTrap(hero.hit, hero.energy, hero.damage, hero.name)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap &hero)
{
	name = hero.name;
	hit = hero.hit;
	energy = hero.energy;
	damage = hero.damage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Done with FragTrap " << name << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " offers high five" << std::endl;
}