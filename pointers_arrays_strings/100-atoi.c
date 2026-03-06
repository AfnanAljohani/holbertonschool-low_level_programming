#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign;
	int result;
	int digits_found;

	sign = 1;
	result = 0;
	digits_found = 0;

	while (*s)
	{
		if (digits_found == 0 && *s == '-')
			sign *= -1;
		else if (digits_found == 0 && *s == '+')
			sign *= 1;
		else if (*s >= '0' && *s <= '9')
		{
			digits_found = 1;
			result = result * 10 + (*s - '0');
		}
		else if (digits_found == 1)
			break;
		s++;
	}
	return (sign * result);
}