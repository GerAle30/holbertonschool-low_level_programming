#include "main.h"
/**
 * _strcpy - Copies a strign to another buffer
 * @dest: The destination buffer
 * @src: The source string to copy
 *
 * Return: The pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';/* Parentheses required for return*/

	return (dest);
}
