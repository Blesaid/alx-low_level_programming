#include "main.h"
/**
 * puts2 - entry point
 * @str: string
 */
void puts2(char *str)
{
	int x = 0;

	for (; str[x] != '\0x; x++)
	{
		if ((x % 2) == 0)
			_putchar(str[x]);
		else
			continue;
	}
	_putchar('\n');
}
