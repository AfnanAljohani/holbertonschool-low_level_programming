#include "main.h"

/**
 * _strlen_p - returns length of string
 * @s: the string
 *
 * Return: length
 */
int _strlen_p(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_p(s + 1));
}

/**
 * _check - checks if string is palindrome recursively
 * @s: the string
 * @i: start index
 * @j: end index
 *
 * Return: 1 if palindrome, 0 if not
 */
int _check(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (_check(s, i + 1, j - 1));
}

/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not
 * @s: the string to check
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_p(s);
	if (len == 0)
		return (1);
	return (_check(s, 0, len - 1));
}
