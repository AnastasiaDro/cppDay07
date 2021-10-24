//
// Created by Cesar Erebus on 10/24/21.
//

#include <iostream>

#ifndef HEADER_HPP
#define HEADER_HPP

template <typename T>
void iter(T *ptr, int &len, void (*f)(int))
{
	for (int i = 0; i < len; ++i)
		f(ptr[i]);
}

template <typename T>
void iter(T *ptr, int &len, void (*f)(const T &))
{
	for (int i = 0; i < len; ++i)
		f(ptr[i]);
}

#endif //DAY07_HEADER_HPP

template <typename T>
void print(T &x)
{
	std::cout << x << std::endl;
}

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}