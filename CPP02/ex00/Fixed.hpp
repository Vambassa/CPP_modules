#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &smth);
	Fixed&	operator = (const Fixed &smth);
	~Fixed();

	int     getRawBits(void) const;
	void    setRawBits(int const raw);

private:
	int                 value;
	static const int    fracBits;

};

#endif