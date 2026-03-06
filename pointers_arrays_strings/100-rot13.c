#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to the string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (from[j] != '\0')
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
				j = 52;
			}
			j++;
		}
		i++;
	}
	return (s);
}
