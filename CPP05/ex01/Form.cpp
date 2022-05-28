#include "Form.hpp"

Form::Form() :	name("Default_form"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const std::string& name, int _gradeToSign, int _gradeToExecute) :	name(name), isSigned(false)
{
	try
	{
		if (_gradeToSign < 1)
			throw GradeTooHighException("The grade is too high. Form signing grade must be between 1 and 150");
		if (_gradeToSign > 150)
			throw GradeTooLowException("The grade is too low. Form signing grade must be between 1 and 150");
		gradeToSign = _gradeToSign;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
		if (_gradeToSign > 150)
			gradeToSign = 150;
		else
			gradeToSign = 1;
	}
	try
	{
		if (_gradeToExecute < 1)
			throw GradeTooHighException("The grade is too high. Form executing grade must be between 1 and 150");
		if (_gradeToExecute > 150)
			throw GradeTooLowException("The grade is too low. Form executing grade must be between 1 and 150");
		gradeToExecute = _gradeToExecute;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
		if (_gradeToExecute > 150)
			gradeToExecute = 150;
		else
			gradeToExecute = 1;
	}
}

Form::Form(const Form& one) :	name(one.name), isSigned(one.isSigned),
								gradeToSign(one.gradeToSign), gradeToExecute(one.gradeToExecute) {}

Form&	Form::operator=(const Form& one)
{
	if (this != &one)
	{
		isSigned = one.isSigned;
		gradeToSign = one.gradeToSign;
		gradeToExecute = one.gradeToExecute;
	}
	return *this;
}

Form::~Form() {}


const std::string&	Form::getName() const
{
	return name;
}

bool	Form::getIsSigned() const
{
	return isSigned;
}

int	Form::getGradeToSign() const
{
	return gradeToSign;
}

int	Form::getGradeToExecute() const
{
	return gradeToExecute;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= gradeToSign)
		isSigned = true;
	else
		throw Bureaucrat::GradeTooLowException("grade is too low");
}

std::ostream&	operator<<(std::ostream &out, const Form& one)
{
	out  << std::setiosflags(std::ios::left) << std::setw(17)
			<< "Form name" << ": " << one.getName() << std::endl;
	out  << std::setiosflags(std::ios::left) << std::setw(17)
			<< "Form is singed" << ": " << one.getIsSigned() << std::endl;
	out  << std::setiosflags(std::ios::left) << std::setw(17)
			<< "Grade to sign" << ": " << one.getGradeToSign() << std::endl;
	out  << std::setiosflags(std::ios::left) << std::setw(17)
			<< "Grade to execute" << ": " << one.getGradeToExecute() << std::endl;
	return out;
}


Form::GradeTooHighException::GradeTooHighException(const std::string& msg) throw() : msg(msg) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw()
{
	return msg.c_str();
}

Form::GradeTooLowException::GradeTooLowException(const std::string& msg) throw() : msg(msg) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw()
{
	return msg.c_str();
}
