#include "A.hpp"

A :: A(A const& copy)
{
	(void)copy;
}

A const& A::operator=(A const& src)
{
	(void)src;
	return (*this);
}