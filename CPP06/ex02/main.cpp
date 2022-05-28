#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    switch (i)
    {
        case 0:
            std::cout << "A class created" << std::endl;
            return new A;
        case 1:
            std::cout << "B class created" << std::endl;
            return new B;
        case 2:
            std::cout << "C class created" << std::endl;
            return new C;
    }
    return NULL;
}

void	identify(Base* p)
{
	if (dynamic_cast <A*> (p))
		std::cout << "It's class A" << std::endl;
	else if (dynamic_cast <B*> (p))
		std::cout << "It's class B" << std::endl;
	else if (dynamic_cast <C*> (p))
		std::cout << "It's class C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast <A&> (p);
		std::cout << "It's class A" << std::endl;
        return ;
	}
	catch (std::exception& ex) {}

	try
	{
		(void)dynamic_cast <B&> (p);
		std::cout << "It's class B" << std::endl;
        return ;
	}
	catch (std::exception& ex) {}

	try
	{
		(void)dynamic_cast <C&> (p);
		std::cout << "It's class C" << std::endl;
	}
	catch (std::exception& ex) {}
}

int	main()
{
	Base *base = generate();

	identify(base);
	identify(*base);
	delete base;
	return 0;
}
