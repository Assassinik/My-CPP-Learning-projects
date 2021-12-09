#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Intern intern;
	Form* form1;
	Form* form2;
	Form* form_err;
	Bureaucrat bureaucrat("Bureaucrat", 1);

	form1 = intern.makeForm("ROBOTIK_REQUEST", "pxpx");
	if (form1)
	{
		bureaucrat.signForm(*form1);
		bureaucrat.executeForm(*form1);
	}
	form2 = intern.makeForm("PresidentialPardon", "Intern");
	if (form2) {
		bureaucrat.signForm(*form2);
		bureaucrat.executeForm(*form2);
	}
	form_err = intern.makeForm("Unknown_form", "Moon");
	if (form_err)
	{
		bureaucrat.signForm(*form_err);
		bureaucrat.executeForm(*form_err);
	}
}