#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the given format
 * @format: A list of types of arguments passed to the function
 *
 * Description: Supports format specifiers:
 * 'c' -char, 'i' - integer, ''f' - float, 's' -string
 * If a string is NULL, it prints "(nil)" instead
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
