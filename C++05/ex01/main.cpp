
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << " " << std::endl <<"First part (Valid one!)" << std::endl << " " << std::endl;
	try
	{
		Bureaucrat one("one", 1);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << " " << std::endl <<	"Second part (Invalid constructor too low one!)" << std::endl << " " << std::endl;
	try
	{
		Bureaucrat two("one", 151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << " " << std::endl <<	"Third part (Invalid constructor too hight one!)" << std::endl << " " << std::endl;
	try
	{
		Bureaucrat two("one", 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << " " << std::endl << "Furth part (Invalid downGrade!)" << std::endl << "" << std::endl;
	try
	{
		Bureaucrat two("one", 150);
		two.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "" << std::endl <<	"Fifth part (Invalid upGrade!)" << std::endl << " " << std::endl;
	try
	{
		Bureaucrat two("one", 1);
		two.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << " " << std::endl << "Six part (Valid form)" << std::endl << " " << std::endl;
	try
	{
		Form valid("one", 1, 5);
		std::cout << valid << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << " " << std::endl << "Seventh part (Invalid form constructor too low!)" << std::endl << " " << std::endl;
	try
	{
		Form valid("one", 151, 10);
		std::cout << valid << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std :: endl;
	}

	std::cout << " " << std::endl << "Eighth part (Invalid form constructor too high!)" << std::endl << "  "<< std::endl;
	try
	{
		Form valid("one", 0, 100);
		std::cout << valid << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << " " << std::endl << "Ninth part (Invalid bureaucrat sign!)" << std::endl << " " << std::endl;
	Form form("form1", 1, 3);
	std::cout << form << std::endl;
	Bureaucrat bureaucrat("bureaucrat1", 1);
	bureaucrat.signForm(form);

	std::cout << " " << std::endl << "Tenth part (Invalid form beSigned!)" << std::endl << " " << std::endl;
	try
	{
		Form form2("form2", 1, 3);
		std::cout << form2 << std::endl;
		Bureaucrat bureaucrat2("bureaucrat2", 1);
		form2.beSigned(bureaucrat2);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "End" << std::endl;
	return (0);
}