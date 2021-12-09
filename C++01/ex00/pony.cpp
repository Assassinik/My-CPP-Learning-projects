#include "pony.hpp"

void pony :: set_init(int id, int age, size_t weight, size_t height, std :: string color, std :: string gender)
{
	this->id = id;
	this->age = age;
	this->weight = weight;
	this->height = height;
	this->color = color;
	this->gender = gender;
}
int pony :: get_id(void) const
{
	return id;
}
int pony :: get_age(void) const
{
	return age;
}
size_t pony :: get_weight(void) const
{
	return weight;
}
size_t pony :: get_height(void) const
{
	return height;
}
std :: string pony :: get_color(void) const
{
	return color;
}
std :: string pony :: get_gender(void) const
{
	return gender;
}