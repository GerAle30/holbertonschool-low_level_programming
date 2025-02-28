#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
