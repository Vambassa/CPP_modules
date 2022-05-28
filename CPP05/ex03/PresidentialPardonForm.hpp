#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm &one);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& one);
	virtual ~PresidentialPardonForm();

	const std::string&		getTarget() const;
	
	virtual void			execute(const Bureaucrat &executor) const;

private:
	std::string	target;
};

std::ostream& operator<<(std::ostream& out, PresidentialPardonForm const& form);

#endif
