#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	hero("Elza");
	ClapTrap	enemy("Troll");

	std::cout << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		hero.attack("Troll");
		enemy.takeDamage(1);
	}
	std::cout << std::endl;
	std::cout << hero.getName() << " has " << hero.getEnergy() << " energy points" << std::endl;
	std::cout << enemy.getName() << " has " << enemy.getHit() << " hit points" << std::endl;
	hero.attack("Troll");
	enemy.beRepaired(1);
	std::cout << std::endl;

	return 0;
}
