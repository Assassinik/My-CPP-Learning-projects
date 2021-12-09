#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <ctime>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : Form("Default Robott Parent", 72, 45)
{
	this->name = "Default";
	std::cout << "Robotomy Request" << *this << " has beed defaultly constructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robott Parent", 72, 45)
{
	this->name = target;
	std::cout << *this << "Robott has beed constructed" << std::endl;
}

RobotomyRequestForm :: ~RobotomyRequestForm()
{
	std::cout << "Robotomy Request" << *this << "Robott has been destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src)
{
	this->name = src.getTarget();
	std::cout << *this << "Robott has beed constructed from a copy" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm :: operator=(RobotomyRequestForm const& src)
{
	this->name = src.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->name);
}

const char* RobotomyRequestForm::FailureException::what() const throw()
{
	return ("Robottttomy failure");
}

void RobotomyRequestForm::execute(Bureaucrat const& executor)
{
	if (this->get_ssigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getEdGrade())
	{
		throw (Form::GradeTooLowException());
	}
	int success = std::rand() % 2;
	std::cout << "< intensive drilling noises >" << std::endl;
	if (success == 1)
	{
		std::cout << this->name << " ^_^ Has Been Robotomized" << std::endl;
	}
	else
		throw (RobotomyRequestForm::FailureException());
}