#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int nb;
	unsigned int div;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	else
		nb = n;

	div = 1;
	while (nb / div >= 10)
		div *= 10;

	while (div >= 1)
	{
		_putchar('0' + nb / div);
		nb %= div;
		div /= 10;
	}
}
