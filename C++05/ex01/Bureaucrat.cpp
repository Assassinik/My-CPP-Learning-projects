#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->grade = 0;
	std::cout << "Bureaucrat Default constructor :" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
	std::cout << "Bureaucrat Copy constructor called :" << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat :: operator=(Bureaucrat const& src)
{
	if (this != &src)
	{
		src.getGrade();
	}
	return *this;
}

Bureaucrat :: ~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called :" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

char const* Bureaucrat::GradeTooHighException::what()const throw()
{
	return "Error: Grade is highest 1";
}

char const* Bureaucrat::GradeTooLowException::what()const throw()
{
	return "Error: Grade is lowest 150";
}

void Bureaucrat::setName(std::string name)
{
	this->name = name;
}

void Bureaucrat::setGrade(int grade)
{
	this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade > max_grade + 1)
	{
		grade--;
	}
	else
		throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decrementGrade()
{
	if (grade < min_grade - 1)
	{
		grade++;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& ostream, Bureaucrat const& src)
{
	ostream << src.getName() << "Bureaucrat Grade " << src.getGrade() << ":" << std::endl;
	return ostream;
}

void Bureaucrat :: signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}