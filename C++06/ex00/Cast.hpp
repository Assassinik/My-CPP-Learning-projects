#ifndef CAST_HPP
#define CAST_HPP

# include <exception>
# include <iostream>
# include <ostream>
# include <string>
# include <cmath>

class Cast
{
	public://Constructors
		Cast();
		Cast(std :: string str);
		Cast(Cast const & copy);
		Cast &operator=(Cast const &src);
		~Cast();
	private:
		std :: string str;
	public://getter
		std :: string getStr()const;
	public:
		char	getChar() const;
		int		getInt() const;
		float	getFloat() const;
		double	getDouble() const;

		class NonDisplayableException : public std :: exception
		{
			virtual const char* what() const throw();
		};

		class ImpossibleException : public std :: exception
		{
			virtual const char* what() const throw();
		};
};
std :: ostream & operator<<(std :: ostream & a, Cast const & b);
#endif