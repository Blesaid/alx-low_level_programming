#include "main.h"
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1: input
 * @s2: input
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, i = 0;
	char *c;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (a = 0; a <= *s1; a++)
	{
	}

	for (b = 0; b <= *s2; b++)
	{
	}

	c = malloc(sizeof(char) * (a + b + 1));

	if (a == NULL)
		return (NULL);

	while (*s1)
	{
		c[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		c[i] = *s2;
		i++;
		s2++;
	}
	return (c);
}
