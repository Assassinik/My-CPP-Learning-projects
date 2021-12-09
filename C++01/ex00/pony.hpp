#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>
#include "utils.hpp"

class pony
{
	public:
		pony()
		{
			age = 0;
			id = 0;
			height = 0;
			weight = 0;
			color = "\0";
			gender = "\0";
		}
		~pony(){}
		pony(const pony& copy)
		{
			std :: cout << "Copy constructor called" << std :: endl;
			*this = copy;
        }
	private:
		int id;
		int age;
		size_t weight;
		size_t height;
		std :: string color;
		std :: string gender;
	public:
		void set_init(int id, int age, size_t weight, size_t height, std :: string color, std :: string gender);
		int get_id(void) const;
		int get_age(void) const;
		size_t get_weight(void) const;
		size_t	get_height(void) const;
		std :: string get_color(void) const;
		std :: string get_gender(void) const;
};

#endif