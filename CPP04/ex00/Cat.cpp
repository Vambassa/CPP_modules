#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& one) : Animal(one.type)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator = (const Cat& one)
{
	type = one.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << type << ": \"Meeeeooow\"" << std::endl;
}