#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat &one);
	Bureaucrat&	operator = (const Bureaucrat &one);
	~Bureaucrat();

	const std::string&	getName() const;
	int					getGrade() const;
	void				increaseGrade();
	void				decreaseGrade();

	void				signForm(Form& form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException (const std::string& msg) throw ();
		~GradeTooHighException () throw ();

		const char *what() const throw();

	private:
		std::string msg;
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException (const std::string& msg) throw ();
		~GradeTooLowException () throw ();

		const char *what() const throw();
	private:
		std::string	msg;
	};

private:
	const std::string	name;
	int					grade; // 1...150
};

std::ostream&	operator << (std::ostream &out, const Bureaucrat &one);

#endif
