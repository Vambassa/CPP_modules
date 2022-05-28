#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl	harl;
		harl.complain(argv[1]);
	}
	else
		std::cout << "Need enter the level of complain" << std::endl;
	return (0);
};
