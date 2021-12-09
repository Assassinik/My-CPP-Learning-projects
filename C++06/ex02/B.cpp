#include "B.hpp"

B :: B(B const& copy)
{
	(void)copy;
}

B const& B :: operator=(B const& src)
{
	(void)src;
	return (*this);
}