#include <stdio.h>

/**
 * print_big - prints a big number split in 3 parts
 * @hi: high part
 * @mid: middle part
 * @lo: low part
 */
void print_big(unsigned long hi, unsigned long mid, unsigned long lo)
{
	if (hi > 0)
		printf("%lu%06lu%06lu", hi, mid, lo);
	else if (mid > 0)
		printf("%lu%06lu", mid, lo);
	else
		printf("%lu", lo);
}

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long ah, am, al, bh, bm, bl, th, tm, tl, c1, c2;
	int i;

	ah = 0; am = 0; al = 1;
	bh = 0; bm = 0; bl = 2;
	for (i = 0; i < 98; i++)
	{
		print_big(ah, am, al);
		if (i < 97)
			printf(", ");
		tl = al + bl;
		c1 = tl / 1000000;
		tl = tl % 1000000;
		tm = am + bm + c1;
		c2 = tm / 1000000;
		tm = tm % 1000000;
		th = ah + bh + c2;
		ah = bh; am = bm; al = bl;
		bh = th; bm = tm; bl = tl;
	}
	printf("\n");
	return (0);
}
