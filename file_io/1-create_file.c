#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *  create_file - creates a file and writes a string to it
 *  @filename: name of the file to create
 *  @text_content: NULL-terminated string to write to the file
 *
 *  Return: 1 on sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}


