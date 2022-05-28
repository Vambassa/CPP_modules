#include "ScavTrap.hpp"

int	main(void)
{
	 ScavTrap	hero("Elza");
	 ScavTrap	enemy("Troll");

	 std::cout << std::endl;
	 for (int i = 0; i < 5; ++i)
	 {
	 	hero.attack("Troll");
	 	enemy.takeDamage(20);
	 }
	 std::cout << std::endl;
	 std::cout << hero.getName() << " has " << hero.getEnergy() << " energy points" << std::endl;
	 std::cout << enemy.getName() << " has " << enemy.getHit() << " hit points" << std::endl;
	 hero.attack("Troll");
	 enemy.takeDamage(20);
	 enemy.beRepaired(1);
	 std::cout << std::endl;
	 hero.guardGate();
	 std::cout << std::endl;

	 return 0;
}
