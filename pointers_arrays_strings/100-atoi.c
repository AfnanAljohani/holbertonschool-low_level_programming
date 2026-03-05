#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int result;
	int neg;

	result = 0;
	neg = 0;
	while (*s != '\0')
	{
		if (*s == '-')
			neg = !neg;
		else if (*s == '+' || *s == ' ')
			;
		else if (*s >= '0' && *s <= '9')
		{
			while (*s >= '0' && *s <= '9')
			{
				result = result * 10 + (*s - '0');
				s++;
			}
			if (neg)
				return (-result);
			return (result);
		}
		else
			neg = 0;
		s++;
	}
	return (0);
}
