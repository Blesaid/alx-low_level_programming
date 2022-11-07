#include "main.h"

/**
 * _strdup - entry point
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, end;
	char *a;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}
	end += 1;
	a = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		a[i] = str[i];

	if (a == NULL)
		return (NULL);
	return (a);
