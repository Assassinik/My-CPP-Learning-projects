#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std :: string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const& copy);
		RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
	private:
		std :: string	name;
	public:
		std :: string	getTarget(void) const;
		void execute(Bureaucrat const& executor);

		class FailureException : public Form :: Exception
		{
		public:
			virtual const char* what() const throw();
		};
};
#endif