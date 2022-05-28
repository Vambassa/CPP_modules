#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :    ClapTrap(100, 50, 30, "Noname_clap_name"),
								ScavTrap("Noname"), FragTrap("Noname"), name("Noname")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :    ClapTrap(100, 50, 30, name + "_clap_name"),
                                                ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &hero) : ClapTrap(hero.hit, hero.energy, hero.damage, hero.name + "_clap_name"),
                                                    ScavTrap(hero.name), FragTrap(hero.name), name(hero.name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (const DiamondTrap &hero)
{
	name = hero.name;
	hit = hero.hit;
	energy = hero.energy;
	damage = hero.damage;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Done with DiamondTrap " << name << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's function \"whoAmI\": " << "I am " << name
                << " and my ClapTrap ancestor is " << ClapTrap::name << std::endl;
}