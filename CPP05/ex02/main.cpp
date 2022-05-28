#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	Jim("Jim", 150);
	Bureaucrat	Linda("Linda", 50);
	Bureaucrat	John("John", 1);

	ShrubberyCreationForm	shrubberyForm("Home");
	std::cout << shrubberyForm << std::endl;
	RobotomyRequestForm		robotomyForm("Cat");
	std::cout << robotomyForm << std::endl;
	PresidentialPardonForm	presidentialForm("Linda");
	std::cout << presidentialForm << std::endl << std::endl;

	Jim.signForm(shrubberyForm);
	Jim.executeForm(shrubberyForm);
	John.executeForm(shrubberyForm);
	std::cout << std::endl;


	Linda.signForm(shrubberyForm);
	Linda.signForm(robotomyForm);
	Linda.signForm(presidentialForm);
	Linda.executeForm(shrubberyForm);
	Linda.executeForm(robotomyForm);
	Linda.executeForm(presidentialForm);
	std::cout << std::endl;

	John.signForm(robotomyForm);
	John.signForm(presidentialForm);
	John.executeForm(robotomyForm);
	John.executeForm(presidentialForm);

	return 0;
}

