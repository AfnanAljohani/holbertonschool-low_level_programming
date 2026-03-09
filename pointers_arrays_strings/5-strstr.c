#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
