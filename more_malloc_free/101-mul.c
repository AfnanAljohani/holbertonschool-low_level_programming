#include "main.h"
#include <stdlib.h>

/**
 * str_len - returns length of a string
 * @s: the string
 *
 * Return: length of string
 */
int str_len(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * is_valid - checks if string contains only digits
 * @s: the string to check
 *
 * Return: 1 if valid, 0 if not
 */
int is_valid(char *s)
{
	int i;

	if (s == NULL || s[0] == '\0')
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * print_error - prints Error followed by newline and exits with 98
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * print_result - prints result array skipping leading zeros
 * @result: array of digits
 * @size: size of array
 */
void print_result(int *result, int size)
{
	int i;
	int start;

	start = 0;
	while (start < size - 1 && result[start] == 0)
		start++;
	for (i = start; i < size; i++)
		_putchar('0' + result[i]);
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits with 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, i, j, size;
	int *result;

	if (argc != 3)
		print_error();
	num1 = argv[1];
	num2 = argv[2];
	if (!is_valid(num1) || !is_valid(num2))
		print_error();
	len1 = str_len(num1);
	len2 = str_len(num2);
	size = len1 + len2;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		exit(98);
	for (i = 0; i < size; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
	for (i = size - 1; i > 0; i--)
	{
		result[i - 1] += result[i] / 10;
		result[i] %= 10;
	}
	print_result(result, size);
	free(result);
	return (0);
}
