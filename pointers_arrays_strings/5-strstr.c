#include "main.h"
#include <stddef.h> /* for the NULL */
#include <stdio.h> /* For printf */

/**
 * _strstr - locate a substring in a string
 * @haystack: the strign to search
 * @needle: the substring to find
 *
 * Return: pointer to the first occurrence of needle in haystack,
 *  or NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*n == '\0')
	{
		return (haystack);
	}
	while (*h)
	{
		char *start = h;
				n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
		{
			return (start);
		}
		h = start + 1;
	}
	return (NULL);
}
