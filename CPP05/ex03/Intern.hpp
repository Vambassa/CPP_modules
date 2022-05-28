#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &one);
	Intern&	operator=(const Intern& one);
	~Intern();

	Form	*makeForm(const std::string& name, const std::string& target);

	class FormNotExistException : public std::exception
	{
	public:
		FormNotExistException (const std::string& msg) throw ();
		~FormNotExistException () throw ();

		const char *what() const throw();

	private:
		std::string	msg;
	};
};

#endif
