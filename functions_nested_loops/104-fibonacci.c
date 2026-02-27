#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	double a, b, temp;
	int i;

	a = 1;
	b = 2;
	for (i = 0; i < 98; i++)
	{
		if (i == 97)
			printf("%.0f\n", a);
		else
			printf("%.0f, ", a);
		temp = a + b;
		a = b;
		b = temp;
	}
	return (0);
}
