#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: string
 * @accept: set of bytes
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == acxept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
