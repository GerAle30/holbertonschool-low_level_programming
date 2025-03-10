#include "main.h"

/**
 * _print_rev_recurison - Prints a string in reverse using recursion
 * @s: The string to be printed
 *
 * return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1); /* Recursive call with next character */
		_putchar(*s); /* Print the current character */
	}
}
