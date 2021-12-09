#include "C.hpp"

#include "C.hpp"

C :: C(C const& copy)
{
	(void)copy;
}

C const& C :: operator=(C const& src)
{
	(void)src;
	return (*this);
}