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

	va_start(args, format);
	i = 0;
	sep = "";
	while (format && format[i])
	{
		str = NULL;
		while (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			if (format[i] == 'c')
				printf("%s%c", sep, va_arg(args, int));
			if (format[i] == 'i')
				printf("%s%d", sep, va_arg(args, int));
			if (format[i] == 'f')
				printf("%s%f", sep, va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				printf("%s%s", sep, str ? str : "(nil)");
			}
			sep = ", ";
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
