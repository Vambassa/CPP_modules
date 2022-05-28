#include <iostream>

struct Data
{
	std::string		name;
	int             age;
	std::string		skill;
};

uintptr_t	serialize(Data  *ptr)
{
	return (reinterpret_cast <uintptr_t> (ptr));
}

Data    *deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data*> (raw));
}

int	main()
{
	Data		*hero1 = new Data;
	uintptr_t	ptr = 0;

	hero1->name = "Elza";
	hero1->age = 25;
	hero1->skill = "ice";

	std::cout << "address of hero1: " << hero1 << std::endl;
	std::cout << "values of hero1:\nname = " << hero1->name << "\nage = " << hero1->age << "\nskill = " << hero1->skill << std::endl;
	std::cout << std::endl;

	ptr = serialize(hero1);
	std::cout << "value of ptr = " << ptr << std::endl;
	std::cout << std::endl;

	Data    *hero2 = deserialize(ptr);
	std::cout << "address of hero2: " << hero2 << std::endl;
	std::cout << "values of hero2:\nname = " << hero2->name << "\nage = " << hero2->age << "\nskill = " << hero2->skill << std::endl;

	delete hero1;
	return 0;
}
