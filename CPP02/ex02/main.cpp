#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b(Fixed( 5.05f) * Fixed( 2));
	Fixed const c(Fixed( 5.05f) / Fixed( 2));
	Fixed d(3.16f);
	Fixed e(3.16f);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

//	std::cout << "my part:" << std::endl;
//	std::cout << Fixed::min( a, b ) << std::endl;
//	std::cout << Fixed::max( b, c ) << std::endl;
//	std::cout << Fixed::min( b, c ) << std::endl;
//
//	std::cout << "a > b: " << (a > b) << std::endl;
//	std::cout << "a < b: " << (a < b) << std::endl;
//	std::cout << "a >= d: " << (a >= d) << std::endl;
//	std::cout << "d >= e: " << (d >= e) << std::endl;
//	std::cout << "a <= d: " << (a <= d) << std::endl;
//	std::cout << "d <= e: " << (d <= e) << std::endl;
//	std::cout << "d == e: " << (d == e) << std::endl;
//	std::cout << "d != e: " << (d != e) << std::endl;
//
//	std::cout << "d + e: " << (d + e) << std::endl;
//	std::cout << "d - e: " << (d - e) << std::endl;
//	std::cout << "d / e: " << (d / e) << std::endl;
//	std::cout << "d * e: " << (d * e) << std::endl;

	return 0;
}