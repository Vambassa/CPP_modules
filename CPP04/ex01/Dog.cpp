#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& one) : Animal(one.type)
{
	brain = new Brain(*(one.brain));
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator = (const Dog& one)
{
	type = one.type;
	delete brain;
	brain = new Brain(*(one.brain));
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << type << ": \"Wooooof\"" << std::endl;
}

void Dog::printIdeas() const
{
	brain->printIdeas();
}