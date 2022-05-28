#include "HandleType.hpp"

int	check_alpha(char *str)
{
	for (int i = 0; str[i]; ++i)
	{
		if (isalpha(str[i]))
			return (1);
	}
	return (0);
}

int	check_float(char *str)
{
	int	i = 0;
	while (isdigit(str[i]) || str[i] == '.')
		++i;
	if (str[i] == 'f' && !str[i + 1])
		return (0);
	return (1);
}

int	check_special(char *str)
{
	if (!strcmp(str, "nan") || !strcmp(str, "+inf") || !strcmp(str, "-inf"))
		return (1);
	if (!strcmp(str, "nanf") || !strcmp(str, "+inff") || !strcmp(str, "-inff"))
		return (2);
	return (0);
}