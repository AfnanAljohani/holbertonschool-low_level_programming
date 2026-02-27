#include "main.h"

/**
 * print_number - prints a number with width 4
 * @n: the number to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + n);
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar(' ');
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
}

/**
 * print_times_table - prints the n times table
 * @n: the multiplier
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			print_number(i * j);
		}
		_putchar('\n');
	}
}
