#include "utils.hpp"

void  ponyOnTheHeap()
{
	int id = 1;
	int age = 26;
	size_t weight = 48;
	size_t height = 67;
	std::string color = "black";
	std::string gender = "male";
	pony* heap_pony;
	heap_pony = new pony();
	heap_pony->set_init(id, age, weight, height, color, gender);
	std::cout << "My pony id: " << heap_pony->get_id() << std::endl;
	std::cout << "My age: " << heap_pony->get_age() << std::endl;
	std::cout << "My weight: " << heap_pony->get_weight() << std::endl;
	std::cout << "My height: " << heap_pony->get_height() << std::endl;
	std::cout << "My color: " << heap_pony->get_color() << std::endl;
	std::cout << "My gender: " << heap_pony->get_gender() << std::endl;
	delete heap_pony;
}
void ponyOnTheStack()
{
	pony stack_pony;
	int id = 2;
	int age = 18;
	size_t weight = 39;
	size_t height = 23;
	std::string color = "white";
	std::string gender = "fmale";
	stack_pony.set_init(id, age, weight, height, color, gender);
	std::cout << "My pony id: " << stack_pony.get_id() << std::endl;
	std::cout << "My age: " << stack_pony.get_age() << std::endl;
	std::cout << "My weight: " << stack_pony.get_weight() << std::endl;
	std::cout << "My height: " << stack_pony.get_height() << std::endl;
	std::cout << "My color: " << stack_pony.get_color() << std::endl;
	std::cout << "My gender: " << stack_pony.get_gender() << std::endl;
}
