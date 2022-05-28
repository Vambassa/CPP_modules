#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: virtual public Animal
{
public:
	Cat();
	Cat(const Cat& one);
	Cat&	operator = (const Cat& one);
	virtual ~Cat();

	virtual void 	makeSound() const;
};

#endif