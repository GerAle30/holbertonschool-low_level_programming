#include "main.h"

/**
 * strign_toupper - converts all lowercase letters of a string to uppercase
 * @str: the strign to be modified
 *
 * Return: the modified string (converted to uppercase)
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
