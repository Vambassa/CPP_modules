#include "AMateria.hpp"

AMateria::AMateria() : type("Default_Materia") {}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(const AMateria& one) : type(one.type) {}

AMateria&	AMateria::operator = (const AMateria& one)
{
	if (this != &one)
		type = one.type;
	return *this;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const
{
	return type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}