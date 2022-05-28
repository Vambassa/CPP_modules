#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &one)
{
	*this = one;
}

Intern&	Intern::operator=(const Intern& one)
{
	(void)one;
	return *this;
}

Intern::~Intern() {}

Form	*Intern::makeForm(const std::string& name, const std::string& target)
{
	Form    *newForm = NULL;
	Form	*formsArr[3] = {new ShrubberyCreationForm(target),
							new RobotomyRequestForm(target),
							new PresidentialPardonForm(target)};

	for (int i = 0; i < 3; ++i)
	{
		if (formsArr[i]->getName() == name)
			newForm = formsArr[i];
		else
			delete formsArr[i];
	}
	try
	{
		if (newForm)
			std::cout << "Intern creates " << name << std::endl;
		else
			throw FormNotExistException("there is no such type of form");
	}
	catch(std::exception &ex)
	{
		std::cout << "Intern can't create " << name << " because " << ex.what() << std::endl;
	}
	return newForm;
}

Intern::FormNotExistException::FormNotExistException(const std::string& msg) throw () : msg(msg) {}

Intern::FormNotExistException::~FormNotExistException() throw () {}

const char *Intern::FormNotExistException::what() const throw ()
{
	return msg.c_str();
}
