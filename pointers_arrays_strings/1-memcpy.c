#include"main.h"

/**
 * _memcpy - copies memory are
 *@dest: destination buffer
 *@src: source buffer
 *@n:number of bytes on copy
 *
 * Return: pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
