#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign;
	int result;
	int minus_count;

	sign = 1;
	result = 0;
	minus_count = 0;
	while (*s != '\0')
	{
		if (*s == '-')
			minus_count++;
		else if (*s == '+')
			;
		else if (*s >= '0' && *s <= '9')
		{
			if (minus_count % 2 != 0)
				sign = -1;
			while (*s >= '0' && *s <= '9')
			{
				result = result * 10 + (*s - '0');
				s++;
			}
			return (sign * result);
		}
		else
			minus_count = 0;
		s++;
	}
	return (0);
}
