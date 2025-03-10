#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the argument count (unused)
 * @argv: the argument vector
 *
 * Return: Always 0
 * int main(int aargc, char *argv[])
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s'\n", argv[0]);

	return (0);
}
