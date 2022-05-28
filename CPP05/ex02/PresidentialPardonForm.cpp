#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :	Form("DefaultPresidentialPardonForm", 25, 5),
													target("DefaultPresidentialPardonForm") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :	Form("PresidentialPardonForm", 25, 5),
																			target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& one) :	Form(one), target(one.target) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& one)
{
	if (this != &one)
		target = one.target;
	return *this;
}

const std::string&	PresidentialPardonForm::getTarget() const
{
	return target;
}

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream&		operator<<(std::ostream& out, PresidentialPardonForm const& form)
{
	out << "PresidentialPardonForm, its target is ";
	out << form.getTarget();
	return out;
}
