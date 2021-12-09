#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat bureaucrat("Bureaucrat", 150);
	std::cout << bureaucrat;
	Bureaucrat newbie("Newbie", 1);
	std::cout << newbie << std :: endl;
	ShrubberyCreationForm shrubbery_creation("shgdfghfh");
	std::cout << shrubbery_creation << std::endl;
	bureaucrat.executeForm(shrubbery_creation); 
	bureaucrat.signForm(shrubbery_creation);
	bureaucrat.executeForm(shrubbery_creation);
	newbie.signForm(shrubbery_creation);
	newbie.executeForm(shrubbery_creation);
	RobotomyRequestForm robotomy_request("sghshgsh");
	std::cout << robotomy_request << std::endl;
	bureaucrat.signForm(robotomy_request);
	bureaucrat.executeForm(robotomy_request);
	newbie.signForm(robotomy_request);
	newbie.executeForm(robotomy_request);
	PresidentialPardonForm presidential_pardon("Mvbxvbxarvdghbnfbncxncnyn");
	std::cout << presidential_pardon << std::endl;
	bureaucrat.executeForm(presidential_pardon);
	bureaucrat.signForm(presidential_pardon);
	bureaucrat.executeForm(presidential_pardon);
	newbie.signForm(presidential_pardon);
	newbie.executeForm(presidential_pardon);
}