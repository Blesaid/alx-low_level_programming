#include "main.h"

/**
 * _memcpy - entry point
 * @dest: dest memory
 * @src: source memory
 * @n: bytes
 * Return: memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
