#include "main.h"
/**
 * print_rev - entry point
 * @s: string
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	for (x = x - 1; x >= 0; x--)
		_putchar(s[ix]);
	_putchar('\n');
}
