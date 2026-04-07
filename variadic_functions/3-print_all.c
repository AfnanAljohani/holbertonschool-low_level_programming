#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	int first;

	va_start(args, format);
	i = 0;
	first = 1;
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			if (!first)
				printf(", ");
			printf("%c", va_arg(args, int));
			first = 0;
		}
		if (format[i] == 'i')
		{
			if (!first)
				printf(", ");
			printf("%d", va_arg(args, int));
			first = 0;
		}
		if (format[i] == 'f')
		{
			if (!first)
				printf(", ");
			printf("%f", va_arg(args, double));
			first = 0;
		}
		if (format[i] == 's')
		{
			if (!first)
				printf(", ");
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			first = 0;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
