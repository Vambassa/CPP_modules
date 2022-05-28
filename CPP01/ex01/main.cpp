#include "Zombie.hpp"

#define HORDE_SIZE 5

int	main(void)
{
	std::string	name;

	std::cout << "Choose the name for your zombies: ";
	std::getline(std::cin, name);
	Zombie  *horde = zombieHorde(HORDE_SIZE, name);
	if (!horde)
		return (1);
	for (int i = 0; i < HORDE_SIZE; ++i)
		horde[i].announce();
	delete[] horde;
	return (0);
}