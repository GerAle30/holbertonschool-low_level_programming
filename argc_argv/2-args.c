#include <stdio.h>

/**
 * main- prints all command line arguments
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0
 */
int mian(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
