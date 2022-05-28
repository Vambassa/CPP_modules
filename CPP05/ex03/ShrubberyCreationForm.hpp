#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm &one);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& one);
	virtual ~ShrubberyCreationForm();

	const std::string&		getTarget() const;

	virtual void			execute(const Bureaucrat &executor) const;

private:
	std::string	target;
};

std::ostream& operator<<(std::ostream& out, ShrubberyCreationForm const& form);

#endif
