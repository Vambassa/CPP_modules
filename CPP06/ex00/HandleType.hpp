#ifndef HandleType_HPP
#define HandleType_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include <cctype>
#include <cstring>

class HandleType
{
public:
	HandleType(double num);
	~HandleType();
	HandleType(const HandleType& other);
	HandleType&	operator=(const HandleType& other);

	double   value;

	void	convertChar(double num, char *arg);
	void	convertInt(double num);
	void	convertFloat(double num);
	void	convertDouble(double num);
};

int	check_alpha(char *str);
int	check_float(char *str);
int	check_special(char *str);

#endif
