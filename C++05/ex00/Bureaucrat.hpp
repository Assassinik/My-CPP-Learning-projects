#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std :: string name, int grade);
		Bureaucrat(Bureaucrat const & copy);
		Bureaucrat &operator=(Bureaucrat const &src);
		~Bureaucrat();
	private:
		int grade;
		std :: string name;
		static const int max_grade = 1;
		static const int min_grade = 150;
	public:
		std :: string getName()const;
		int getGrade()const;
		class GradeTooHighException : public std :: exception
		{
			public:
				char const* what() const throw();
		};
		class GradeTooLowException : public std :: exception
		{
			public:
				char const* what() const throw();
		};
		void setName(std :: string name);
		void setGrade(int grade);
		void incrementGrade();
		void decrementGrade();
};
std :: ostream &operator<<(std :: ostream &ostream, Bureaucrat const &src);
#endif