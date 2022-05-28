#include "iter.hpp"

int main(void)
{
	int arrInt[5] = {1, 2, 3, 4, 5};
	float arrFloat[5] = {0.5, 3.7, 5.9, 0.7, -6.2};

	iter(arrInt, 5, &pow);
	iter(arrInt, 5, &print);
	std::cout << std::endl;
	iter(arrFloat, 5, &pow);
	iter(arrFloat, 5, &print);
	return 0;
}