#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :	Form("DefaultRobotomyRequestForm", 72, 45),
												target("DefaultRobotomyRequestForm") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :	Form("RobotomyRequestForm", 72, 45),
																		target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& one) :	Form(one), target(one.target) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& one)
{
	if (this != &one)
		target = one.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string&	RobotomyRequestForm::getTarget() const
{
	return target;
}

void	RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	Form::execute(executor);
	std::cout << "Makes some drilling noises" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << target << " robotomized failed" << std::endl;
}

std::ostream&		operator<<(std::ostream& out, RobotomyRequestForm const& form)
{
	out << "RobotomyRequestForm, its target is ";
	out << form.getTarget();
	return out;
}
