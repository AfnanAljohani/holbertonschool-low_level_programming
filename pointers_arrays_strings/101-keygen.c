#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int pass_len;

	srand(time(NULL));
	pass_len = rand() % 10 + 1;
	for (i = 0; i < pass_len; i++)
		putchar(rand() % 94 + 33);
	putchar('\n');
	return (0);
}
