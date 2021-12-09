#include <iostream>
#include <string>

int main(void)
{
	std :: string brain = "HI THIS IS BRAIN";
	std :: string *point = &brain;
	std :: string &ref = brain;

	std :: cout << "(brain):" << brain << std :: endl;
	std :: cout << "(Pointer):" << *point << std :: endl;
	std :: cout << "(referenc):" << ref << std :: endl;
}