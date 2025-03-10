#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * 2s1: First string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory containing
 * the concatenated string,or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = s1 ? strlen(s1) : 0;
	int len2 = s2 ? strlen(s2) : 0;

	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	if (s1)
		strcpy(concat, s1);
	else
		concat[0] = '\0';

	if (s2)
		strcat(concat, s2);

	return (concat);
}
