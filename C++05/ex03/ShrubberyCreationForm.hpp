#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iomanip>
#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std :: string name);
		ShrubberyCreationForm(ShrubberyCreationForm const& copy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& src);
		~ShrubberyCreationForm();
	private:
		std :: string name;
	public:
		void execute(Bureaucrat const& executor);
		std :: string get_nname()const;
	};
#endif 