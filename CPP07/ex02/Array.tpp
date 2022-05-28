#include "Array.hpp"

template <typename T>
Array<T>::Array(): data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : data(new T[n]), _size(n)
{
	for (size_t i = 0; i < _size; ++i)
		data[i] = 0;
}

template <typename T>
Array<T>::Array(const Array& one)
{
	_size = one._size;
	data = new T[_size];
	for (size_t i = 0; i < _size; ++i)
		data[i] = one.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& one)
{
	if (*this != one)
	{
		delete [] data;
		_size = one._size;
		data = new T[_size];
		for (size_t i = 0; i < _size; ++i)
			data[i] = one.data[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] data;
}

template<typename T>
T&	Array<T>::operator[](size_t index)
{
	if (index < 0 || index >= _size)
		throw std::out_of_range("Element out of range");
	return data[index];
}

template<typename T>
size_t	Array<T>::size() const
{
	return _size;
}

template<typename T>
std::ostream&	operator<<(std::ostream &out, Array<T>& one)
{
	size_t	len = one.size();
	for (size_t i = 0; i < len; ++i)
	{
		out << one[i];
		if (i < len - 1)
			out << " ";
	}
	return out;
}
