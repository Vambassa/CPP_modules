#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& one) : AMateria(one.type) {}

Cure&	Cure::operator = (const Cure& one)
{
	if (this != &one)
		type = one.type;
	return *this;
}

Cure::~Cure() {}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
