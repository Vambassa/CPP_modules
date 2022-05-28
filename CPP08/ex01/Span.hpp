#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(const Span& one);
	Span&	operator=(const Span& one);
	~Span();

	void	addNumber(int number);
	void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);

	int		shortestSpan();
	int		longestSpan();

	const std::vector<int>&		getVector() const;

	class FullSpanException : public std::exception
	{
	public:
		FullSpanException (const std::string& msg) throw ();
		~FullSpanException () throw ();
		
		const char *what() const throw();

	private:
		std::string msg;
	};

	class NotEnoughSpanException : public std::exception
	{
	public:
		NotEnoughSpanException (const std::string& msg) throw ();
		~NotEnoughSpanException () throw ();

		const char *what() const throw();

	private:
		std::string msg;
	};

private:
	std::vector<int>	v;
	unsigned int		_size;
};

std::ostream& operator<<(std::ostream& out, const Span& span);

#endif
