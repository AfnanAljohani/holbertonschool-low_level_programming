#include <stdio.h>

/**
 * main - uses a pointer to change the value of a variable
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int *p = a;

	/* your line of code here */
	*(p + 2) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
