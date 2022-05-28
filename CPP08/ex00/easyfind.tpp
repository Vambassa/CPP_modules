#include "easyfind.hpp"

template <typename T>
void	easyfind(T& container, int num)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), num);
	try
	{
		if (iter == container.end())
			throw std::exception();
		std::cout << "Element found, " << *iter << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "Element not found, " << num << std::endl;
	}
}
