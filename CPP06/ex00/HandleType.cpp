#include "HandleType.hpp"

HandleType::HandleType(double num) : value(num) {}

HandleType::~HandleType() {}

HandleType::HandleType(const HandleType& one) {
	*this = one;
}

HandleType& HandleType::operator=(const HandleType& one) {
	if (this != &one)
		value = one.value;
	return *this;
}

void	HandleType::convertChar(double num, char *arg)
{
	if (num < 0 || num > 255 || check_special(arg))
		std::cout << "impossible" << std::endl;
	else if (!isprint(num))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast <char> (num) << "'" << std::endl;
}

void	HandleType::convertInt(double num)
{
	if (num < std::numeric_limits <int>::min()
		|| num > std::numeric_limits <int>::max() || num != num)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast <int> (num) << std::endl;
}

void	HandleType::convertFloat(double num)
{
	if (num == std::numeric_limits <float>::infinity())
		std::cout << "inff" << std::endl;
	else if (num == -std::numeric_limits <float>::infinity())
		std::cout << "-inff" << std::endl;
	else if (num != num)
		std::cout << "nanf" << std::endl;
	else if (num > std::numeric_limits <float>::max() || num < -std::numeric_limits <float>::max() )
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast <float> (num) << "f" << std::endl;
}

void	HandleType::convertDouble(double num)
{
	if (num == std::numeric_limits <double>::infinity())
		std::cout << "inf" << std::endl;
	else if (num == -std::numeric_limits <double>::infinity())
		std::cout << "-inf" << std::endl;
	else if (num != num)
		std::cout << "nan" << std::endl;
	else if (num > std::numeric_limits <double>::max() ||
		num < -std::numeric_limits <double>::max() )
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast <double> (num) << std::endl;
}