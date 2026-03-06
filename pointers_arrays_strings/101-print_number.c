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
		div = -1;
	}
	else
		div = 1;

	while (n / div / 10 != 0)
		div *= 10;

	while (div != 0)
	{
		if (n < 0)
			_putchar('0' - n / div);
		else
			_putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
}
