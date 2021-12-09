#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const& copy);
		Intern& operator=(Intern const& src);
		~Intern();
	private:
		Form* forms;

		Form* getShrubberyCreationForm(std::string const& target);
		Form* getRobotomyRequestForm(std::string const& target);
		Form* getPresidentialPardonForm(std::string const& target);

		std::string formatString(std::string formID);
	public:
		Form* makeForm(std :: string name, std :: string form);
};

#endif