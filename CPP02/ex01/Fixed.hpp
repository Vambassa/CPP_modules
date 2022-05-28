#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int x);
	Fixed(const float x);
	Fixed(const Fixed &smth);
	Fixed&	operator = (const Fixed &smth);
	~Fixed();

	int     getRawBits(void) const;
	void    setRawBits(int const raw);
	float   toFloat(void) const;
	int     toInt(void) const;

private:
	int                 value;
	static const int    fracBits;

};

std::ostream&	operator << (std::ostream &out, const Fixed &smth);

#endif