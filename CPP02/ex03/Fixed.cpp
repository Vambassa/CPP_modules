#include "Fixed.hpp"

const int	Fixed::fracBits(8);

Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int x)
{
//	std::cout << "Int constructor called" << std::endl;
	value = x << fracBits;
}

Fixed::Fixed(const float x)
{
//	std::cout << "Float constructor called" << std::endl;
	value = roundf(x * (1 << fracBits));
}

Fixed::Fixed(const Fixed &smth)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = smth;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}


void	Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
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


Fixed&	Fixed::operator = (const Fixed &smth)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	value = smth.getRawBits();
	return *this;
}

bool	Fixed::operator < (const Fixed &smth) const
{
	return this->value < smth.value;
}

bool	Fixed::operator > (const Fixed &smth) const
{
	return smth.value < this->value;
}

bool	Fixed::operator == (const Fixed &smth) const
{
	return (!(this->value < smth.value || this->value > smth.value));
}

bool	Fixed::operator >= (const Fixed &smth) const
{
	return (!(this->value < smth.value)) ;
}

bool	Fixed::operator <= (const Fixed &smth) const
{
	return (!(this->value > smth.value));
}

bool	Fixed::operator != (const Fixed &smth) const
{
	return (!(this->value == smth.value));
}


Fixed	Fixed::operator + (const Fixed &smth) const
{
	Fixed	tmp;
	tmp.setRawBits(this->getRawBits() + smth.getRawBits());
	return tmp;
}

Fixed	Fixed::operator - (const Fixed &smth) const
{
	Fixed	tmp;
	tmp.setRawBits(this->getRawBits() - smth.getRawBits());
	return tmp;
}

Fixed	Fixed::operator * (const Fixed &smth) const
{
	Fixed	tmp;
	tmp.setRawBits(this->getRawBits() * smth.getRawBits() / (1 << fracBits));
	return tmp;
}

Fixed	Fixed::operator / (const Fixed &smth) const
{
	Fixed	tmp;
	tmp.setRawBits((this->toFloat() / smth.toFloat()) * (1 << fracBits));
	return tmp;
}


Fixed&	Fixed::operator ++ (void)
{
	value += 1;
	return *this;
}

Fixed&	Fixed::operator -- (void)
{
	value -= 1;
	return *this;
}

const Fixed	Fixed::operator ++ (int)
{
	Fixed	tmp = *this;
	value += 1;
	return tmp;
}

const Fixed	Fixed::operator -- (int)
{
	Fixed	tmp = *this;
	value -= 1;
	return tmp;
}

std::ostream&	operator << (std::ostream &out, const Fixed &smth)
{
	out << smth.toFloat();
	return out;
}


Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
