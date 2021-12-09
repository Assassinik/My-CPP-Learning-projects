#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
class Array
{
	public:
		Array() : len(0)
		{
			arr = new T[0]();
		}
		Array<T>(unsigned int n) : len(n)
		{
			arr = new T[n]();
		}
		Array(Array const& copy) : len(copy.len)
		{
			this->arr = new T[copy.len];
			for (int i = 0; i < static_cast<int>(copy.len); i++)
				this->arr[i] = copy.arr[i];
		}
		Array const& operator=(Array const& other)
		{
			if (this->len)
			{
				delete[] arr;
			}
			this->len = other.len;
			this->arr = new T[other.len];
			for (int i = 0; i < static_cast<int>(other.len); i++)
			{
				this->arr[i] = other.arr[i];
			}

			return (*this);
		}
		~Array()
		{ 
			delete[] arr;
		}
		T& operator[](unsigned int src)
		{
			if (src >= this->len)
				throw SegFaultException();
			else
				return (this->arr[src]);
		}
		class SegFaultException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Segmentation fault");
			}
		};
	private:
		T* arr;
		unsigned int len;
	public:
		int	size() const
		{ 
			return (this->len); 
		}
};
#endif