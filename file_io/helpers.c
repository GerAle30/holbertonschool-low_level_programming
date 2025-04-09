#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * error_exit - prints error message and exits with code
 * @code: exit code
 * @message: error message
 * @file: filename or descriptor
 */
void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(code);
}
