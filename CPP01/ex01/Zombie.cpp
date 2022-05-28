#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << name << " rose from the ground" << std::endl;
};

Zombie::~Zombie()
{
	std::cout << "Done with " << name << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::changeName(std::string _name)
{
	name = _name;
}
