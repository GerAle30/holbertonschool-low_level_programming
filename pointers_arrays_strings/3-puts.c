#include "main.h"

/**
 * _puts - Print a string to stdout
 * @str: the string to be printed
 *
 * This function loops through each character in the strign and prints
 * it using _putchar until the null-terminator is reached A newline is
 * printed after the string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str); /* Calls the custom _putchar function */
		str++;
	}
	_putchar('\n');
}
