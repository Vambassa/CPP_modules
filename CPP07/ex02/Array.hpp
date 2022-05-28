#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(const Array& one);
	Array&	operator=(const Array& one);
	virtual ~Array();

	T&	operator[](size_t index);

	size_t	size() const;

private:
	T		*data;
	size_t	_size;
};

#include "Array.tpp"

template<typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>& data);

#endif
