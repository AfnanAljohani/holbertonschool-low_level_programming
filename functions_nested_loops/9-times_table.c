#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, product;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				if (product >= 10)
					_putchar(' ');
				else
					_putchar(' '), _putchar(' ');
			}
			if (product >= 10)
				_putchar('0' + product / 10);
			_putchar('0' + product % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
