#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std :: string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		PresidentialPardonForm& operator=(PresidentialPardonForm const& copy);

		std :: string	getTarget(void) const;

		void execute(Bureaucrat const& executor);
	private:
		std :: string name;
};
#endif