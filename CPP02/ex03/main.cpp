#include "Point.hpp"

int	main(void)
{
	Point	A(0, 10);
	Point	B(0, 0);
	Point	C(5, 0);
	Point	D(1, 1);
	Point	E(D);
	Point	J = Point(5, 0);
	Point	G(11.5f, 12.3f);
	Point	L = A;

	std::cout << "A" << A << " is the vertex of the triangle" << std::endl;
	std::cout << "B" << B << " is the vertex of the triangle" << std::endl;
	std::cout << "C" << C << " is the vertex of the triangle" << std::endl;

	Point arr[5] = {D, E, J, G, L};
	for (int i = 0; i < 5; ++i)
	{
		if (!bsp(A, B, C, arr[i]))
			std::cout << "Point " << arr[i] << " is not inside the triangle" << std::endl;
		else
			std::cout << "Point " << arr[i] << " lies inside the triangle" << std::endl;
	}
	return 0;
}