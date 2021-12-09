#include "ZombieEvent.hpp"
#include <time.h>
ZombieEvent zombie;

int random_number()
{
	srand(time(NULL));
	int i = 0;
	i = rand() % 6 + 1;
	return i;
}

int main(void)
{
	std :: string input_command;
	std :: cout << "Input (RANDOM) for creat random zombie whit random name and type" << std :: endl;
	std :: cout << "Input (CREATE) for creat zombie and setup manula name and type" << std :: endl;
	std :: cout << "Can creat 6 zombie(My Restriction:)" << std :: endl;
	std :: string type;
	while (true)
	{
		std :: getline(std :: cin, input_command);
		if (input_command == "RANDOM")
		{
			type = random_type(random_number());
				zombie.set_ZombieType(type);
				std :: string name = randomChump();
				zombie.newZombie(name);
		}
		else if (input_command == "CREATE")
		{
				std :: string name = input();
				std :: cout << std :: left << name << std :: endl;
				std :: cout << std :: left << "Enter zombie type :" << std :: endl;
				cout_type_zombie_info();
				int a;
				std :: cin >> a;
				std :: string type = zombie_type(a);
				zombie.set_ZombieType(type);
				zombie.newZombie(name);
		}
		else if (input_command == "EXIT")
		{
			exit(1);
		}
	}
}