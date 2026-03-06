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
	int has_digit;

	sign = 1;
	result = 0;
	has_digit = 0;

	while (*s)
	{
		if (*s == '-' && has_digit == 0)
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			has_digit = 1;
			if (sign == -1)
				result = result * 10 - (*s - '0');
			else
				result = result * 10 + (*s - '0');
		}
		else if (has_digit == 1)
			break;
		s++;
	}
	return (result);
}
