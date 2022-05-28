#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm &one);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& one);
	virtual ~RobotomyRequestForm();

	const std::string&		getTarget() const;
	
	virtual void			execute(const Bureaucrat &executor) const;

private:
	std::string	target;
};

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm const& form);

#endif
