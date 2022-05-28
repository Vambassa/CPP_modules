#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
    DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &hero);
    DiamondTrap&	operator = (const DiamondTrap &hero);
	virtual ~DiamondTrap();

	virtual void	attack(std::string const &target);
	void			whoAmI(void);

private:
	std::string		name;
};

#endif