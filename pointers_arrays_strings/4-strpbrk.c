#include "main.h"
#include <stddef.h> /* For NULL */
#include <stdio.h> /* For Printf */

/**
 * _strpbrk - locates the first occurrence in a string of any character
 * from another string
 * @s: striugn to search
 * @accept: characters toi search for in s
 *
 * Return: pointer to the first occurrence of any character from accept
 * in s, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s) /* iterate through the string s */
	{
		char *a = accept;

		while (*a) /* check if the current character in s matches any in accept */
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL); /* if no match is found, return NULL */
}

