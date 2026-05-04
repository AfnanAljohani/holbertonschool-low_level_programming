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
	int target;
	int current;
	int c;

	srand(time(NULL));
	target = 0xad4;
	current = 0;

	while (current < target - 126)
	{
		c = rand() % 94 + 33;
		putchar(c);
		current += c;
	}
	c = target - current;
	putchar(c);
	putchar('\n');
	return (0);
}
