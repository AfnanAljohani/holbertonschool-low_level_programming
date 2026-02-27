#include <stdio.h>
#include <string.h>

/**
 * add_numbers - adds two number strings
 * @a: first number string
 * @b: second number string
 * @result: result string
 */
void add_numbers(char *a, char *b, char *result)
{
	int i, j, k, carry, sum, la, lb;
	char temp[50];

	la = strlen(a);
	lb = strlen(b);
	carry = 0;
	k = 0;
	i = la - 1;
	j = lb - 1;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += a[i--] - '0';
		if (j >= 0)
			sum += b[j--] - '0';
		temp[k++] = '0' + sum % 10;
		carry = sum / 10;
	}
	for (i = 0; i < k; i++)
		result[i] = temp[k - 1 - i];
	result[k] = '\0';
}

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[50], b[50], temp[50];
	int i;

	strcpy(a, "1");
	strcpy(b, "2");
	for (i = 0; i < 98; i++)
	{
		if (i == 97)
			printf("%s\n", a);
		else
			printf("%s, ", a);
		add_numbers(a, b, temp);
		strcpy(a, b);
		strcpy(b, temp);
	}
	return (0);
}
