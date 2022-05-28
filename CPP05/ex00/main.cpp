#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat Jim("Jim", 150);
	std::cout << Jim << "\n";
	Jim.decreaseGrade();
	std::cout << Jim << "\n";
	std::cout << std::endl;

	Bureaucrat Linda("Linda", 1);
	std::cout << Linda << "\n";
	Linda.increaseGrade();
	std::cout << Linda << "\n";
	std::cout << std::endl;

	std::cout << "Trying to create a bureaucrat with grade 0: ";
	Bureaucrat John("John", 0);
	std::cout << John << "\n";
	std::cout << std::endl;

	std::cout << "Trying to create a bureaucrat with grade 200: ";
	Bureaucrat Jacob("Jacob", 200);
	std::cout << Jacob << "\n";
	std::cout << std::endl;

	Bureaucrat Michael("Michael", 36);
	std::cout << Michael << "\n";
	Michael.increaseGrade();
	Michael.increaseGrade();
	Michael.increaseGrade();
	std::cout << Michael << "\n";
	Michael.decreaseGrade();
	Michael.decreaseGrade();
	std::cout << Michael << "\n";

	return 0;
}
