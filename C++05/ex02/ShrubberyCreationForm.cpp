#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm :: ShrubberyCreationForm() : Form("XDXDXDXD", 145, 137)
{
	this->name = "Default";
	std :: cout << *this << " defaultly constructed" << std :: endl;
}
ShrubberyCreationForm :: ShrubberyCreationForm(std :: string name) : Form("asdasdf", 145, 137)
{
	this->name = name;
	std :: cout << *this << "parametric constructed" << std :: endl;
}
ShrubberyCreationForm :: ShrubberyCreationForm(ShrubberyCreationForm const& copy)
{
	this->name = copy.get_nname();
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	if (this != &src)
	{
		this->name = src.get_nname();
	}
	return *this;
}
ShrubberyCreationForm :: ~ShrubberyCreationForm()
{
	std :: cout  << *this << "destroyed called " << std :: endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) 
{
	std :: string blbl = " bliloasd";
	if (this->get_ssigned() == false)
		throw (Form :: UnsignedFormException());
	else if (executor.getGrade() > this->getGradee())
		throw (Form :: GradeTooLowException());
	else
	{
		std :: ofstream ofs(this->name.c_str());
		if (!ofs.is_open())
		{
			std :: cout << "Cant open the output file" << std :: endl;
			return;
		}
		ofs << blbl;
	}
}

std :: string ShrubberyCreationForm :: get_nname() const
{
	return name;
}
