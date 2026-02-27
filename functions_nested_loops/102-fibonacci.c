#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long a, b, temp;

	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		if (i == 49)
			printf("%ld\n", a);
		else
			printf("%ld, ", a);
		temp = a + b;
		a = b;
		b = temp;
	}
	return (0);
}
