#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& one) : Animal(one.type)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator = (const Dog& one)
{
	type = one.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << type << ": \"Wooooof\"" << std::endl;
}