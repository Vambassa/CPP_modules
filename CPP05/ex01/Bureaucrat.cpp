#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string& _name, int _grade) : name(_name)
{
	try
	{
		if (_grade < 1)
			throw GradeTooHighException("The grade is too high.");
		if (_grade > 150)
			throw GradeTooLowException("The grade is too low.");
		grade = _grade;
	}
	catch (Bureaucrat::GradeTooHighException& ex)
	{
		std::cout << ex.what() << std::endl;
		grade = 1;
	}
	catch (Bureaucrat::GradeTooLowException& ex)
	{
		std::cout << ex.what() << std::endl;
		grade = 150;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& one) : name(one.name), grade(one.grade) {}

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat& one)
{
	if (this != &one)
		grade = one.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string&	Bureaucrat::getName() const
{
	return name;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

void	Bureaucrat::increaseGrade()
{
	try
	{
		if (grade == 1)
			throw GradeTooHighException("1 is a maximum grade. Can't increase it.");
		--grade;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

void	Bureaucrat::decreaseGrade()
{
	try
	{
		if (grade == 150)
			throw GradeTooLowException("150 is a minimum grade. Can't decrease it.");
		++grade;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form& form) const
{
	try
	{
		if (getGrade() <= form.getGradeToSign() && form.getIsSigned())
			throw 1;
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex)
	{
		std::cout << getName() << " couldn't sign " << form.getName()
					<< " because " << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << getName() << " couldn't sign " << form.getName() << ", because it is already signed" << std::endl;
	}
}

std::ostream&	operator << (std::ostream &out, const Bureaucrat &one)
{
	out << one.getName() << ", bureaucrat grade " << one.getGrade() << ".";
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& msg) throw(): msg(msg) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return msg.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& msg) throw() : msg(msg) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return msg.c_str();
}
