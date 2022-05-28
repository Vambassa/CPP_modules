#include "Bureaucrat.hpp"

int	main()
{
	Form	tooLowToSign("TooLowToSign", 200, 100);
	std::cout << tooLowToSign << std::endl;

	// Form	tooHighToSign("TooHighToSign", 0, 100);
	// std::cout << tooHighToSign << std::endl;

	Form	tooLowToExecute("TooLowToExecute", 100, 200);
	std::cout << tooLowToExecute << std::endl;

	// Form	tooHighToExecute("TooHighToExecute", 100, 0);
	// std::cout << tooHighToExecute << std::endl;

	Form	highSignLowExecute("HighSignLowExecute", 0, 200);
	std::cout << highSignLowExecute << std::endl;

	Form	normalForm("NormalForm", 50, 75);
	std::cout << normalForm << std::endl;

	Bureaucrat Jim("Jim", 1);
	Bureaucrat Linda("Linda", 150);
	Bureaucrat John("John", 50);

	Form	normalForm2("NormalForm2", 50, 75);

	Jim.signForm(normalForm);
	Linda.signForm(normalForm);
	John.signForm(normalForm);
	John.signForm(normalForm2);
	std::cout << std::endl << normalForm << std::endl;
	std::cout << normalForm2 << std::endl;

	return 0;
}
