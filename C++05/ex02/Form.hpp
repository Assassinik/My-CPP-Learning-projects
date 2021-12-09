#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form()
		{
			this->grade = 0;
			this->edgrade = 0;
			this->ssigned = false;
		}
		Form(const std::string name, int grade, int edgrade);
		Form(Form const& copy);
		Form& operator=(Form const& src);
		~Form();
		class GradeTooHighException : public std::exception
		{
		public:
			char const* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
		public:
			char const* what() const throw();
		};
		class Exception : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};
		class UnsignedFormException : public Form::Exception
		{
		public:
			virtual const char* what() const throw();
		};
	protected:
		int grade;
		int edgrade;
		std::string name;
		bool ssigned;
	public:
		int getGradee();
		int getEdGrade();
		std::string getName()const;
		void set_ssigned(bool ssigned);
		bool get_ssigned();
		void beSigned(Bureaucrat const& src);
		virtual void execute(Bureaucrat const& executeor) = 0;
};
std::ostream& operator<<(std::ostream& oostream, Form& src);
#endif