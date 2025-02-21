#include "main.h"

/**
 *print_last_digit - Prints the last of a number
 *@n: The number from which the last digit will be extracted
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (0);
}

