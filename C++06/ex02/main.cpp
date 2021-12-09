#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	int type;

	type = rand() % 3;
	switch (type)
	{
		case 0: return (new A());
		case 1: return (new B());
		case 2: return (new C());
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std :: cout << "A" << std :: endl;
	else if (dynamic_cast<B*>(p))
		std :: cout << "B" << std :: endl;
	else if (dynamic_cast<C*>(p))
		std :: cout << "C" << std :: endl;
	else
		std :: cout << "Unknown type!" << std :: endl;
}

void	identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std :: cout << "A" << std :: endl;
	else if (dynamic_cast<B*>(&p))
		std :: cout << "B" << std :: endl;
	else if (dynamic_cast<C*>(&p))
		std :: cout << "C" << std :: endl;
	else
		std :: cout << "Unknown type!" << std :: endl;
}

int main(void)
{
	Base* new_base;

	std :: srand(time(NULL));
	new_base = generate();
	identify(new_base);
	delete new_base;

	new_base = generate();
	identify(*new_base);
	delete new_base;

	return (0);
}