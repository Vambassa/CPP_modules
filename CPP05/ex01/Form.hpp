#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <iomanip>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const std::string& name, int gradeToSign, int gradeToExecute);
	Form(const Form &one);
	Form&	operator = (const Form& one);
	virtual ~Form();

	const std::string&	getName() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;

	void 				beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException (const std::string& msg) throw ();
		~GradeTooHighException () throw ();

		const char *what() const throw();

	private:
		std::string	msg;
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
	bool				isSigned;
	int			 		gradeToSign;
	int					gradeToExecute;
};

std::ostream&	operator << (std::ostream &out, const Form &other);

#endif
