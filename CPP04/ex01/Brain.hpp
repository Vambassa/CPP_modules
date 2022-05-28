#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain &one);
	Brain&	operator = (const Brain &one);
	virtual ~Brain();

	void printIdeas() const;

private:
	std::string		ideas[100];
};

#endif
