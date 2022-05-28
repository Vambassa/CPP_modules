#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& one) : WrongAnimal(one.type)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator = (const WrongCat& one)
{
	type = one.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << type << ": \"Meeeeooow\"" << std::endl;
}
