#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a1, a2, b1, b2, t1, t2;
	int i;

	a1 = 1;
	a2 = 0;
	b1 = 2;
	b2 = 0;
	for (i = 0; i < 98; i++)
	{
		if (a2 > 0)
			printf("%lu%018lu", a2, a1);
		else
			printf("%lu", a1);
		if (i < 97)
			printf(", ");
		t1 = a1 + b1;
		t2 = a2 + b2 + (t1 < a1 ? 1 : 0);
		a1 = b1;
		a2 = b2;
		b1 = t1;
		b2 = t2;
	}
	printf("\n");
	return (0);
}
