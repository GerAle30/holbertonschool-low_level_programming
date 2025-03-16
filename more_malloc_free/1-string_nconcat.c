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
	unsigned int len1 = 0, len2 = 0, i;
	char *concat;

	/* Handle NULL inputs */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths manually (without strlen) */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* If n is grater than s2 lenght, use full s2 */
	if (n > len2)
		n = len2;

	/* Allocate memory for concatenated string */
	concat = malloc(len1 + n + 1);
	if (!concat)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy up to n characters from s2 */
	for (; i < len1 + n; i++)
		concat[i] = s2[i - len1];

			concat[i] = '\0'; /* NULL-terminate the string */

	return (concat);
}
