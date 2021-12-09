#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	const Animal* animal[10];
	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			animal[i] = new Cat();
		}
		else
		{
			animal[i] = new Dog();
		}
	}
	const Animal * cat = new Cat(*(static_cast<Cat const *>(animal[2])));

	for (size_t i = 0; i < 10; i++)
	{
		delete animal[i];
	}
	Dog dog;
	Cat catt;
	Dog	dog_sound(dog);
	Cat	cat_sound(catt);
	catt.set_inittype("Alert!!! this is a cat type change");
	std :: cout << cat->get_type() << std :: endl;
	std :: cout << catt.get_type() << std :: endl;
}