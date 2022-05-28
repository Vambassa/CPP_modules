#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	hero("Elza");
	DiamondTrap	enemy("Troll");

	std::cout << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		hero.attack("Troll");
		enemy.takeDamage(30);
	}
	std::cout << std::endl;
	hero.guardGate();
	hero.highFivesGuys();
	hero.whoAmI();
	std::cout << std::endl;

	return 0;
}
