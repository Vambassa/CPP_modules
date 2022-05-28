#include "Fixed.hpp"

const int	Fixed::fracBits(8);

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called" << std::endl;
	value = x << fracBits;
}

Fixed::Fixed(const float x)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(x * (1 << fracBits));
}

Fixed::Fixed(const Fixed &smth)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = smth;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator = (const Fixed &smth)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = smth.getRawBits();
	return *this;
}

std::ostream&	operator << (std::ostream &out, const Fixed &smth)
{
	out << smth.toFloat();
	return out;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

int	Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float> (value / pow(2, fracBits));
}

int	Fixed::toInt(void) const
{
	return value >> fracBits;;
}