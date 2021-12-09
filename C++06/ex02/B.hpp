#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base
{
	public:
		B() {}
		B(B const& copy);
		~B() {}

		B const& operator=(B const& src);
};

#endif