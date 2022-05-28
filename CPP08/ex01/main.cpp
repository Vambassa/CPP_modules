#include "Span.hpp"

int main(int, char**)
{
	Span sp = Span(100);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "sp: " << sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int>	v1;
	for (int i = 0; i < 100; ++i)
		v1.push_back(i);
	sp.addNumber(v1.begin(), v1.end());
	std::cout << "sp: " << sp << std::endl;

	std::vector<int>	v2;
	for (int i = 0; i < 50; ++i)
		v2.push_back(i * i);
	sp.addNumber(v2.begin(), v2.end());
	std::cout << "sp: " << sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
