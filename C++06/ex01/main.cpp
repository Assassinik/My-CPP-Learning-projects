#include "serialize.hpp"

int main()
{
	Data data = { 23, "pix" };
	uintptr_t uin;
	Data* after_cast;

	std :: cout << "Before: " << data.age << " " << data.name << std :: endl;
	uin = serialize(&data);
	std :: cout << "uinptr: " << uin << std :: endl;
	after_cast = deserialize(uin);
	std :: cout << "After: " << after_cast->age << " " << after_cast->name << std :: endl;
	return (0);
}