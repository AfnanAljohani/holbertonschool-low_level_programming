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
	int in_sign;

	result = 0;
	neg = 0;
	in_sign = 0;
	while (*s != '\0')
	{
		if (*s == '-')
		{
			neg = !neg;
			in_sign = 1;
		}
		else if (*s == '+')
			in_sign = 1;
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
		{
			neg = 0;
			in_sign = 0;
		}
		s++;
	}
	(void)in_sign;
	return (0);
}
