#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span& one)
{
	v = one.v;
	_size = one._size;
}

Span& Span::operator=(const Span& one)
{
	if (this != &one)
	{
		v = one.v;
		_size = one._size;
	}
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int number)
{
	try
	{
		if (v.size() < _size)
			v.push_back(number);
		else
			throw Span::FullSpanException("addNUmber: Span is full, can't add more numbers");
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	try
	{
		size_t count = end - start;

		if (v.size() + count > _size)
			throw Span::FullSpanException("addNumber: can't add all elements to span");
		v.insert(v.end(), start, end);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

int	Span::shortestSpan()
{
	try
	{
		if (v.size() < 2)
			throw Span::NotEnoughSpanException("shortestSpan: Not enough elements in the Span");

		std::vector<int>::iterator	iter1 = v.begin();
		std::vector<int>::iterator	iter2;
		int							min = std::abs(*(iter1 + 1) - *iter1);
		int 						diff;

		while (iter1 != v.end())
		{
			iter2 = iter1 + 1;
			while (iter2 != v.end())
			{
				diff = std::abs(*iter2 - *iter1);
				if (diff < min)
					min = diff;
				++iter2;
			}
			++iter1;
		}
		return (min);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
		return (1);
	}
}

int	Span::longestSpan()
{
	try
	{
		if (v.size() < 2)
			throw Span::NotEnoughSpanException("shortestSpan: Not enough elements in the Span");

		std::vector<int>::iterator max = std::max_element(v.begin(), v.end());
		std::vector<int>::iterator min = std::min_element(v.begin(), v.end());

		return (*max - *min);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
		return (1);
	}
}

const std::vector<int>&	Span::getVector() const
{
	return v;
}

std::ostream&		operator<<(std::ostream& out, const Span& one)
{
	size_t	size = one.getVector().size();

	for (size_t i = 0; i < size; ++i)
		out << one.getVector()[i] << " ";
	return out;
}

Span::FullSpanException::FullSpanException(const std::string& msg) throw(): msg(msg) {}

Span::FullSpanException::~FullSpanException() throw() {}

const char *Span::FullSpanException::what() const throw()
{
	return msg.c_str();
}

Span::NotEnoughSpanException::NotEnoughSpanException(const std::string& msg) throw() : msg(msg) {}

Span::NotEnoughSpanException::~NotEnoughSpanException() throw() {}

const char *Span::NotEnoughSpanException::what() const throw()
{
	return msg.c_str();
}
