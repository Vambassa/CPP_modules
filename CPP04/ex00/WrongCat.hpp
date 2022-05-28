#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& one);
	WrongCat&	operator = (const WrongCat& one);
	virtual ~WrongCat();

	void 	makeSound() const;
};

#endif