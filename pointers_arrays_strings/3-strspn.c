#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: the string to search
 * @accept: the accepted characters
 *
 * Return: number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i;

	count = 0;
	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
			return (count);
		s++;
	}
	return (count);
}
