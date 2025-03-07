#include "main.h"
#include <stddef.h> /* for the NULL */
#include <stdio.h> /* For printf */

/**
 * _strpbrk - locate the first occurrence in a string of any caracter
 * from another string
 * @s: string to search
 * @accept: characters to search for in s
 *
 * Return: pointer to the first occurrence of any character from accept
 * in s, or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a; /* Declare the pointer 'a' outside the loop */

	for (; *s; s++) /* Iterate through the string of s */
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
				return (s); /* Return pointer to the first matching character */
		}
	}
	return (NULL);
}
