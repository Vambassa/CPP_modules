#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(const Animal& one);
	Animal&	operator = (const Animal& one);
	virtual ~Animal();

	virtual void 				makeSound() const;
	const std::string&	        getType() const;

protected:
	std::string		type;
	Animal(std::string type);
};

#endif
