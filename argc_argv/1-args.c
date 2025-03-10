#include <stdio.h>

/**
 * main - prints the number of command linearguments
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0-
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
