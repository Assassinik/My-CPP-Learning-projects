#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class fixed
{	public:
		fixed();
		fixed(const fixed& cpoy);
		fixed & operator= (fixed const& copy);
		~fixed() 
		{
			std :: cout << "Destructor called" << std :: endl;
		}
	private:
		const static int n = 8;
		int point;
	public:
		int getRawBits(void)const;
		void setRawBits(int const raw);
};
#endif 
