#include "Cast.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std :: cout << "Wrong number of arguments!" << std :: endl;
		return (1);
	}
	Cast converter(argv[1]);
	std :: cout << converter;

	return (0);
}	