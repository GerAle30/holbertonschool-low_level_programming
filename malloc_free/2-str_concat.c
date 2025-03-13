#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the newly allocated space in memory
 * containing the concatenated
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *concat;

	if
		(!s1) s1 = "";

	if
		(!s2) s2 = "";

	while
		(s1[i]) i++;

	while
		(s2[j]) j++;

	concat = malloc((i + j + 1) * sizeof(char));
	if (!concat)
		return (NULL);

	for (int k = 0; k < i; k++)
		concat[k] = s1[k];
	for (int k = 0; k <= j; k++)
		concat[i + k] = s2[k];

	return (concat);
}
