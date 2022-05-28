#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "WrongAnimal constructor with a specific type called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& one) : type(one.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal& one)
{
	type = one.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << type << ": \"Make some soooouuund\"" << std::endl;
}

const std::string&	WrongAnimal::getType() const
{
	return type;
}