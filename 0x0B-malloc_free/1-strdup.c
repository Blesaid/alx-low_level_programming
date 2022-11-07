#include "main.h"
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, k;
	char *a;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
		;
	a = malloc(k * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		a[i] = str[i];
	a[i] = '\0';

	return (a);
}
