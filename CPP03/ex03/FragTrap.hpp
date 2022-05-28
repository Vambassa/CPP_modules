#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
    FragTrap(const std::string name);
	FragTrap(const FragTrap &hero);
    FragTrap&	operator = (const FragTrap &hero);
	virtual ~FragTrap();

	void            highFivesGuys();
};

#endif
