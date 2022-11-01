#include "main.h"

/**
 * _strchr - locates a character
 * @s: string
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	}
	if (*s == 0)
		return (0);
	s++;
}
