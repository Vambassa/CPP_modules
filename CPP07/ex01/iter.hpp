#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T>
void print(T& x)
{
	std::cout << x << " ";
}

template <typename T>
void pow(T& x)
{
	x *= x;
}

template <typename T>
void    iter(T *arr, int len, void (*f)(T& x))
{
	for (int i = 0; i < len; ++i)
		(*f)(arr[i]);
}

#endif
