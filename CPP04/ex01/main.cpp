#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;
	Animal	*arr[10];
	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; ++i)
		arr[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 10; ++i)
		delete arr[i];

	return 0;


//	Dog basic;
//	{
//		Dog tmp = basic;
//	}
//	basic.printIdeas();
}