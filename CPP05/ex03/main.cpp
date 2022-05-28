#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	Ron("Ron", 1);
	Intern		someRandomIntern;
	Form		*rrf;

	rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Linda");
	rrf->beSigned(Ron);
	Ron.executeForm(*rrf);
	std::cout << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Linda");
	rrf->beSigned(Ron);
	Ron.executeForm(*rrf);
	std::cout << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("ShrubberyCreationFrom", "Linda");
	rrf->beSigned(Ron);
	Ron.executeForm(*rrf);
	std::cout << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("NonameForm", "Jim");

	delete rrf;
	return 0;
}

