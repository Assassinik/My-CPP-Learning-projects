#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed & operator= (Fixed const & copy);
		Fixed(const int arg);
		Fixed(const float arg);
		~Fixed(){}
	private:
		int point;
		static const int  bit = 8;
	public:
		bool operator>(const Fixed &src)const;
		bool operator<(const Fixed &src)const;
		bool operator>=(const Fixed &src)const;
		bool operator<=(const Fixed &src)const;
		bool operator==(const Fixed &src)const;
		bool operator!=(const Fixed &src)const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);


		Fixed operator+(const Fixed &src);
		Fixed operator-(const Fixed &src);
		Fixed operator*(const Fixed &src);
		Fixed operator/(const Fixed &src);
		
		static const Fixed &max(const Fixed & a, const Fixed & b);
		static const Fixed &min(const Fixed & a, const Fixed & b);
	public:
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
		void	setRawBits(int const raw);
};
std :: ostream &operator<<(std :: ostream &stream, const Fixed &copy);
#endif

