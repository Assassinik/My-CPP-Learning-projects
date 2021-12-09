#include "easyfind.hpp"


int main(void)
{
	int myints[] = { 1, 2, 3, 4, 5 };

	std :: vector<int> vec(myints, myints + sizeof(myints) / sizeof(int));
	try
	{
		std :: cout << *easyfind(vec, 3) << std :: endl;
	}
	catch (std :: exception const& e) { std :: cerr << e.what() << std :: endl; }

	std :: list<int> lst(myints, myints + sizeof(myints) / sizeof(int));
	try {
		std :: cout << *easyfind(lst, 2) << std :: endl;
		std :: cout << *easyfind(lst, 12) << std :: endl;
	}
	catch (std :: exception const& e)
	{
		std :: cerr << e.what() << std :: endl;
	}
	return (0);
}