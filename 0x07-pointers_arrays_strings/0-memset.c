#include "main.h"
/**
 * _memset - entry point
 * @s: bytes
 * @b: byte
 * @n: buffer size
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
