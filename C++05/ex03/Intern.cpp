#include "Intern.hpp"

Intern :: Intern()
{
	std :: cout << "Intern Default constructor called:" << std :: endl;
}

Intern :: Intern(Intern const& copy)
{
	*this = copy;
}

Intern & Intern :: operator=(Intern const & src)
{
	if (this != &src)
	{
		return *this;
	}
	forms = src.forms;
	return *this;
}

Intern :: ~Intern()
{
	delete forms;
	std :: cout << "Intern Destructor called:" <<  std :: endl;
}

Form * Intern :: getShrubberyCreationForm(std :: string const& target)
{
	delete forms;
	forms = new ShrubberyCreationForm(target);
	return forms;
}

Form * Intern :: getRobotomyRequestForm(std :: string const& target)
{
	delete forms;
	forms = new RobotomyRequestForm(target);
	return forms;
}

Form * Intern :: getPresidentialPardonForm(std :: string const& target)
{
	delete forms;
	forms = new PresidentialPardonForm(target);
	return forms;
}

std :: string Intern :: formatString(std :: string formID)
{
	std :: string const& pix("_- ");
	int a = pix.length();
	int b = formID.length();
	for (int i = 0; i < b; i++)
	{
		formID[i] = tolower(formID[i]);
	}

	for (int i = 0; i < a; i++)
	{
		while (formID.find(pix[i]) != std :: string :: npos)
		{
			formID.erase(formID.find(pix[i]), 1);
		}
	}

	return (formID);
}

Form * Intern :: makeForm(std :: string name, std :: string form)
{
	std :: string format_string;

	std :: string dic_string[3]	= { "Shrubberycreation", "Robotomyrequest", "Presidentialpardon" };

	Form* (Intern :: * choose_form[3])(std::string const&) =
	{
		&Intern :: getShrubberyCreationForm,
		&Intern :: getRobotomyRequestForm,
		&Intern :: getPresidentialPardonForm
	};

	format_string = formatString(name);

	for (int i = 0; i < 3; i++)
	{
		if (format_string == dic_string[i])
		{
			std :: cout << "Intern creates " << name << std :: endl;
			return ((this->*choose_form[i])(form));
		}
	}
	std :: cerr << name << ": Unknow form" << std :: endl;
	return (NULL);
}
