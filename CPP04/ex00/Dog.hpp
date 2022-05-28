#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: virtual public Animal
{
public:
	Dog();
	Dog(const Dog& one);
	Dog&    operator = (const Dog& one);
	virtual ~Dog();

	virtual void 	makeSound() const;
};

#endif