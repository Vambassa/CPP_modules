#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	std::string str;

//	std::cout << "Enter the level of complain: ";
//	std::getline(std::cin, str);
//	harl.complain(str);

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("COMPILE");
	return (0);
};
