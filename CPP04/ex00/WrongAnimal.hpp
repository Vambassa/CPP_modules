#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& one);
	WrongAnimal&	operator = (const WrongAnimal& one);
	virtual ~WrongAnimal();

	const std::string&	getType() const;
	void 				makeSound() const;

protected:
	std::string		type;
	WrongAnimal(std::string type);
};

#endif
