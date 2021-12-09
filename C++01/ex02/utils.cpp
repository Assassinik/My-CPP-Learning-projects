#include "utils.hpp"

std::string randomChump()
{
	std::string random_name;
	const char *alp =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	srand(time(0));

	for (int i = 0; i < 21; i++)
	{
		random_name += alp[rand() % 21 - 1];
	}
	return random_name;
}
std::string random_type(int i)
{
	std :: string randome_type = "\0";
	randome_type = zombie_type(i);
	return randome_type;
}
std :: string input()
{
	std :: string name = "\0";
	std :: cout << std :: left << "Enter zombie name" << std :: endl;
	std :: getline(std::cin, name);

	return name;
}
std :: string zombie_type(int number)
{
	std :: string return_type = "\0";
	std :: string type[6] = {
	"Assassin",
	"Magician",
	"Warrior",
	"SUPPORT",
	"Doctor",
	"Swordsman"
	};
	if (number < 0 || number > 6)
	{
		return "error";
	}
	switch (number)
	{
	case 1:
	{
		return_type = type[0];
		break;
	}
	case 2:
	{
		return_type = type[1];
		break;
	}
	case 3:
	{
		return_type = type[2];
		break;
	}
	case 4:
	{
		return_type = type[3];
		break;
	}
	case 5:
	{
		return_type = type[4];
		break;
	}
	case 6:
	{
		return_type = type[5];
		break;
	}
		default:
			break;
	}
	return return_type;
}
void cout_type_zombie_info()
{
	std :: cout << std :: left << "1 is Assassin:" << std :: endl;
	std :: cout << std :: left << "2 is Magician:" << std :: endl;
	std :: cout << std :: left << "3 is Warrior:" << std :: endl;
	std :: cout << std :: left << "4 is SUPPORT:" << std :: endl;
	std :: cout << std :: left << "5 is Doctor:" << std :: endl;
	std :: cout << std :: left << "6 is Swordsman:" << std :: endl;
}