#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	//WrongAnimal init custom
	const WrongAnimal* cat = new WrongCat();

	std :: cout << j->get_type() << " " << std :: endl;
	std :: cout << i->get_type() << " " << std :: endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	cat->makeSound();

	delete meta;
	delete j;
	delete i;
	delete cat;
}