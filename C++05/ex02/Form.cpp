#include "Form.hpp"

Form::Form(const std::string name, int grade, int edgrade)
{
	this->name = name;
	this->grade = grade;
	this->edgrade = edgrade;
	std::cout << "Form Default constructor :" << std::endl;
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
}
Form::Form(Form const& copy)
{
	std::cout << "Form Copy constructor called :" << std::endl;
	*this = copy;
}
Form& Form :: operator=(Form const& src)
{
	if (this != &src)
		this->ssigned = src.ssigned;
	return *this;
}
Form :: ~Form()
{
	std::cout << "Form Destructor called :" << std::endl;
}
std::string Form::getName() const
{
	return this->name;
}

void Form::set_ssigned(bool ssigned)
{
	this->ssigned = ssigned;
}
bool Form::get_ssigned()
{
	return this->ssigned;
}
void Form :: beSigned(Bureaucrat const& src)
{
	if (src.getGrade() > this->getEdGrade())
	{
		throw (Form::GradeTooLowException());
	}
	this->ssigned = true;
}
int Form::getGradee()
{
	return grade;
}
int Form::getEdGrade()
{
	return edgrade;
}
char const* Form::GradeTooHighException::what() const throw()
{
	return "Error: Grade is highest 1";
}
char const* Form::GradeTooLowException::what()const throw()
{
	return "Error: Grade is lowest 150";
}
std::ostream& operator<<(std::ostream& oostream, Form& src)
{
	oostream << src.getName().c_str() << std::endl << src.getGradee() << std::endl << src.getEdGrade() << std::endl;
	return oostream;
}
const char* Form::Exception::what() const throw()
{
	return ("FormException");
}
const char* Form::UnsignedFormException::what() const throw()
{
	return ("Cannot execute an unsigned form");
};