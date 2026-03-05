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
	int neg;

	result = 0;
	while (*s != '\0')
	{
		sign = 1;
		neg = 0;
		while (*s == '-' || *s == '+')
		{
			if (*s == '-')
				neg = !neg;
			s++;
		}
		if (*s >= '0' && *s <= '9')
		{
			if (neg)
				sign = -1;
			while (*s >= '0' && *s <= '9')
			{
				result = result * 10 + (*s - '0');
				s++;
			}
			return (sign * result);
		}
		if (neg)
			s--;
		s++;
	}
	return (0);
}
