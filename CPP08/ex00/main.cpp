#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
	std::vector<int> v;
	for (int i = 0; i < 20; ++i)
		v.push_back(i * i);
	for (int i = 0; i < 20; ++i)
		std::cout << v[i] << ' ';
	std::cout << std::endl << std::endl;
	easyfind(v, 121);
	easyfind(v, 75);
	std::cout << std::endl;

	std::list<int> l;
	for (int i = 0; i < 20; ++i)
		l.push_back(i * i);
	for (std::list<int>::iterator iter = l.begin(); iter != l.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	easyfind(l, 121);
	easyfind(l, 75);

	return 0;
}
