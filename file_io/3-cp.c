#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * error_exit - prints error message and exits with code
 * @code: exit code
 * @message: error message
 * @file: filename or fd string
 */
void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - copies content from one file to another
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success, exits with code otherwise
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", argv[2]);

	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
			error_exit(99, "Error: Can't write to", argv[2]);
	}

	if (r == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

