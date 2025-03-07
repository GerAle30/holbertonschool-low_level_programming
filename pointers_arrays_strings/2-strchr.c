#include "main.h"
#include <stddef.h> /* inlcude this header for NULL */

/**
 * _strchr - locates a character in a string.
 *@s: string to search
 *@c: character to locate
 *
 * Return: pointer to the first occurrence of the character in the string
 * Null if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s) /*iterate through the string until null-terminator */
	{
		if (*s == c)
		{
			return (s); /*Return pointer to the found character */
		}
		s++;
	}
	if (c == '\0') /* Handle the case where character is '\0' */
	{
		return (s);
	}

	return (NULL);
}

