#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i += 4)
	{
		ideas[i] = "sleep";
		ideas[i + 1] = "eat";
		ideas[i + 2] = "think";
		ideas[i + 3] = "change world";
	}
}

Brain::Brain(const Brain &one)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = one.ideas[i];
}

Brain&	Brain::operator = (const Brain &one)
{
	if (this != &one)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = one.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::printIdeas() const
{
	for (int i = 0; i < 100; ++i)
		std::cout << ideas[i] << " ";
	std::cout << std::endl;
}