#include <stdio.h>

/**
 * main - sum of even Fibonacci terms below 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	long a, b, temp, sum;

	a = 1;
	b = 2;
	sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%ld\n", sum);
	return (0);
}
