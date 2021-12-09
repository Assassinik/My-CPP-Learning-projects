#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float a);
		Fixed(const Fixed & cpoy);
		Fixed & operator= (Fixed const & copy);
		~Fixed()
		{
			std :: cout << "Destructor called" << std :: endl;
		}
	private:
		const static int n = 8;
		int point;
	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void)const;
		float toFloat(void)const;
};
std :: ostream & operator<<(std :: ostream & o, Fixed const & hmm);
#endif