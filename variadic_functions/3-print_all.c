#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	char *sep;
	char c;
	int num;
	float f;

	va_start(args, format);
	i = 0;
	sep = "";
	while (format && format[i])
	{
		str = NULL;
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", sep, c);
			sep = ", ";
		}
		if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%s%d", sep, num);
			sep = ", ";
		}
		if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", sep, f);
			sep = ", ";
		}
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s%s", sep, str ? str : "(nil)");
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
