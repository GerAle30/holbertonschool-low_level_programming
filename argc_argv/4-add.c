#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a strign is a vlaid number
 * @str: the strign to check
 *
 * Return: 1 if valid, 0 if not.
 */
int is_number(char *str)
{
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;

	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * main - adds numbers passed as argumentsand prints the result
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on success, or 1 if there are non-numericarguments
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
