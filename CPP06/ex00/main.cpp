#include "HandleType.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "The program takes 1 and only 1 argument" << std::endl;
		return (1);
	}
	try
	{
		if (int i = check_special(argv[1]))
			;
		else if (strlen(argv[1]) > 1 && check_alpha(argv[1]) && check_float(argv[1]))
			throw std::exception();

		double	num;

		if (isalpha(argv[1][0]) && !check_special(argv[1]))
			num = static_cast <double> (argv[1][0]);
		else
			num = std::stod(argv[1]);

		HandleType arg(num);
		
		std::cout << std::fixed << std::setprecision(1);
		std::cout << std::setiosflags(std::ios::left) << std::setw(7) << "char" << ": ";
		arg.convertChar(arg.value, argv[1]);
		std::cout << std::setiosflags(std::ios::left) << std::setw(7) << "int" << ": ";
		arg.convertInt(arg.value);
		std::cout << std::setiosflags(std::ios::left) << std::setw(7) << "float" << ": ";
		arg.convertFloat(arg.value);
		std::cout << std::setiosflags(std::ios::left) << std::setw(7) << "double" << ": ";
		arg.convertDouble(arg.value);
	}
	catch (std::exception &ex)
	{
		std::cout << std::setiosflags(std::ios::left) << std::setw(7) << "char" << ": Error" << std::endl;
		std::cout << std::setiosflags(std::ios::left) << std::setw(7) << "int" << ": Error" << std::endl;
		std::cout << std::setiosflags(std::ios::left) << std::setw(7) << "float" << ": Error" << std::endl;
		std::cout << std::setiosflags(std::ios::left) << std::setw(7) << "double" << ": Error" << std::endl;
	}
}