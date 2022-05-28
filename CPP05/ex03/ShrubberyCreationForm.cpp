#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :  Form("DefaultShrubberyCreationForm", 145, 137),
												 target("DefaultShrubberyCreationForm") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationFrom", 145, 137),
																		  target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& one) : Form(one), target(one.target) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& one)
{
	if (this != &one)
		target = one.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string&  ShrubberyCreationForm::getTarget() const
{
	return target;
}

void  ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	Form::execute(executor);

	std::ofstream	file((target + "_shruberry").c_str());
	if (!file.is_open())
	{
		std::cout << "Failed to open file" << std::endl;
		return ;
	}
	file << "\n\
             /\\ \n\
            <  > \n\
             \\/ \n\
             /\\ \n\
            /  \\ \n\
           /++++\\ \n\
          /  ()  \\ \n\
          /      \\ \n\
         /~`~`~`~`\\ \n\
        /  ()  ()  \\ \n\
        /          \\ \n\
       /*&*&*&*&*&*&\\ \n\
      /  ()  ()  ()  \\ \n\
      /              \\ \n\
     /++++++++++++++++\\ \n\
    /  ()  ()  ()  ()  \\ \n\
    /                  \\ \n\
   /~`~`~`~`~`~`~`~`~`~`\\ \n\
  /  ()  ()  ()  ()  ()  \\ \n\
  /*&*&*&*&*&*&*&*&*&*&*&\\ \n\
 /                        \\ \n\
/,.,.,.,.,.,.,.,.,.,.,.,.,.\\ \n\
           |   | \n\
          |`````| \n\
          \\_____/";
	file.close();
}

std::ostream&		operator<<(std::ostream& out, ShrubberyCreationForm const& form)
{
	out << "ShrubberyCreationFrom, its target is ";
	out << form.getTarget();
	return out;
}
