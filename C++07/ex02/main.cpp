#include "Array.hpp"


int main(void)
{
	Array<std::string> text(2);

	text[0] = "testik";
	text[1] = "pxik";

	std :: cout << "String array :" << std :: endl;
	for (unsigned int index = 0; index < (unsigned)text.size(); index++)
	{
		std :: cout << "text[" << index << "] = " << text[index] << std :: endl;
	}

	std :: cout << std :: endl;
	std :: cout << "Copy text:" << std :: endl;
	Array<std :: string> copy(text);
	std :: cout << "Change list[0] to lurj" << std :: endl;
	text[0] = "lurj";
	std :: cout << "copy[0] = " << copy[0] << std :: endl;
	std :: cout << "text[0] = " << text[0] << std :: endl;
    return (0);
}