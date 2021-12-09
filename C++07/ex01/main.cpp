#include "iter.hpp"

int main(void)
{
	int			iarr[4] = { 0, 1, 2, 3 };
	char		carr[5] = "abcd";
	float		farr[4] = { 0.1f, 2.3f, 4.5f, 6.7f };
	std::string	sarr[4] = { "OK", "KO", "OO", "KK" };

	tests(iarr, 4, "INT");
	tests(carr, 5, "CHAR");
	tests(farr, 4, "FLOAT");
	tests(sarr, 4, "STRING");
}