#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal constructor with a type called" << std::endl;
}

Animal::Animal(const Animal& one)
{
	*this = one;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator = (const Animal& one)
{
	type = one.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << type << ": \"Make some soooouuund\"" << std::endl;
}

const std::string&	Animal::getType() const
{
	return type;
}