#ifndef A_HPP
#define A_HPP

#include "Base.hpp"
class A : public Base
{
	public:
		A() {}
		A(A const& copy);
		~A() {}

		A const& operator=(A const& src);
};

#endif // !A_HPP

