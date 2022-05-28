#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombieNaf("Naf-Naf");
	Zombie	*zombieNuf;
	zombieNuf = newZombie("Nuf-Nuf");

	zombieNaf.announce();
	zombieNuf->announce();
	randomChump("Nif-Nif");
	delete zombieNuf;
	return (0);
}