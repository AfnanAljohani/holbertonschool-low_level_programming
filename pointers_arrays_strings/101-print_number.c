#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	div = 1;
	while (div * 10 <= n)
		div *= 10;

	while (div >= 1)
	{
		_putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
}
