#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::debug(void)
{
	std::cout << "[DEBUG] " << std::endl << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-specialketchup burger. "
			  << std::endl << "I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] "<< std::endl << "I cannot believe adding extra bacon costs more money. "
			  << std::endl << "You didn’t put enough bacon in my burger! "
			  << std::endl << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] "<< std::endl << "I think I deserve to have some extra bacon for free. "
			  << std::endl << "I’ve been coming for years whereas you started working "
			  << "here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] " << std::endl << "This is unacceptable! I want to speak to the manager now."
			  << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	    (Harl::*f[4])(void) = {&Harl::debug, &Harl::info,
									   &Harl::warning, &Harl::error};
	int         i = 0;

	while (i < 4 && level != arr[i])
		i++;
	switch (i)
	{
		case 0:
			(this->*f[0])();
			break;
		case 1:
			(this->*f[1])();
			break;
		case 2:
			(this->*f[2])();
			break;
		case 3:
			(this->*f[3])();
			break;
		default:
			std::cout << "Level must be 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
			break;
	}
}
