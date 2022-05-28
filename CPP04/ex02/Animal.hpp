#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& one);
	Animal&	operator = (const Animal& one);

	virtual void 				makeSound() const = 0;
	const std::string&      	getType() const;

protected:
	std::string		type;
	Animal(std::string type);
};

#endif
