#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2
 * @s1: The first string
 * @s2: the second string
 * @n: The number of characters to concatenate from s2
 *
 * Return: Pointer to newly allocated concatenated string,
 * or NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2, i;
	char *concat;

	/* Handle NULL inputs */
	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	/* If n is greater than s2 length, use full s2 */
	if (n > len2)
		n = len2;

	/* Allocate memory for concatenated string */
	concat = malloc(len1 + n + 1);
	if (!concat)
		return (NULL);

	/*Copy s1 and first n characters of s2 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (; i < len1 + n; i++)
		concat[i] = s2[i - len1];

	concat[i] = s2[i - len1];

	concat[i] = '\0'; /* NULL-terminate the string */
	return (concat);
}
