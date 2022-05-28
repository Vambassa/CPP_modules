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
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed&	operator = (const Fixed &other);
	bool	operator > (const Fixed &smth) const;
	bool	operator < (const Fixed &smth) const;
	bool	operator >= (const Fixed &smth) const;
	bool	operator <= (const Fixed &smth) const;
	bool	operator == (const Fixed &smth) const;
	bool	operator != (const Fixed &smth) const;

	Fixed	operator + (const Fixed &smth) const;
	Fixed	operator - (const Fixed &smth) const;
	Fixed	operator * (const Fixed &smth) const;
	Fixed	operator / (const Fixed &smth) const;

	Fixed&	operator ++ (void);
	Fixed&	operator -- (void);
	const Fixed	operator ++ (int);
	const Fixed	operator -- (int);

	static Fixed&		min(Fixed &a, Fixed &b);
	static Fixed&		max(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);

private:
	int					value;
	static const int	fracBits;
};

std::ostream&	operator << (std::ostream &out, const Fixed &other);

#endif