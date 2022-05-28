#include "FragTrap.hpp"

int	main(void)
{
	 FragTrap	hero("Elza");
	 FragTrap	enemy("Troll");

	 std::cout << std::endl;
	 for (int i = 0; i < 3; ++i)
	 {
	 	hero.attack("Troll");
	 	enemy.takeDamage(30);
	 }
	 std::cout << std::endl;
	 enemy.beRepaired(50);
	 std::cout << hero.getName() << " has " << hero.getEnergy() << " energy points" << std::endl;
	 std::cout << enemy.getName() << " has " << enemy.getHit() << " hit points" << std::endl;
	 std::cout << std::endl;
	 hero.highFivesGuys();
	 std::cout << std::endl;

	 return 0;
}
