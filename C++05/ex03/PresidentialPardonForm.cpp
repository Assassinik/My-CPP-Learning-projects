#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default President Parent", 25, 5)
{
	this->name = "Default";
	std::cout << *this << " Presidential has beed defaultly constructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form("President Parent", 25, 5)
{
	this->name = name;
	std::cout << *this << " Presidential has beed constructed" << std::endl;
}

PresidentialPardonForm :: ~PresidentialPardonForm()
{
	std::cout << *this << " Presidential has been destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy)
{
	this->name = copy.getTarget();
	std::cout << *this << " Presidential has beed constructed from a copy" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm :: operator=(PresidentialPardonForm const& src)
{
	this->name = src.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->name);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor)
{
	if (this->get_ssigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getEdGrade())
		throw (Form::GradeTooLowException());
	else
		std::cout << this->name << " was pardonned by Assassin" << std::endl;
}