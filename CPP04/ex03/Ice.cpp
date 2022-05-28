#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& one) : AMateria(one.type) {}

Ice&	Ice::operator = (const Ice& one)
{
	if (this != &one)
		type = one.type;
	return *this;
}

Ice::~Ice() {}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
