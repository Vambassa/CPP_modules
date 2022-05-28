#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& hero);
	ClapTrap&	operator = (const ClapTrap &hero);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	const std::string&	getName() const;
	int					getHit() const;
	int					getEnergy() const;
	int					getDamage() const;

private:
	std::string	name;
	int			hit;
	int			energy;
	int			damage;

};

#endif