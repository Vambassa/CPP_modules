#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& one) : Animal(one.type)
{
	brain = new Brain(*(one.brain));
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator = (const Cat& one)
{
	type = one.type;
	delete brain;
	brain = new Brain(*(one.brain));
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << type << ": \"Meeeeooow\"" << std::endl;
}

void Cat::printIdeas() const
{
	brain->printIdeas();
}