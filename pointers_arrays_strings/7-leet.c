#include "main.h"

/**
 * leet - encodes a string into 1337 (leet) speak
 * @str: the string to be modified
 *
 * Return: the modified strign (encoded to 1337)
 */
char *leet(char *str)
{
	int i, j;
	char leet_chars[] = {'a', 'e', 'o', 't', '1'};
	char leet_replacements[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_chars[j] || str[i] == leet_chars[j] - 32)
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}
	return (str);
}
