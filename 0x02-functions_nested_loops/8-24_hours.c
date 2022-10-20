#include "main.h"
/**
 * jack_bauer - entry point
 * h = hour, x = minutes
 * Return: 24hours
 */
void jack_bauer(void)
{
	int h;
	int x;

	for (h = 0; h < 24; h++)
	{
		for(x = 0; ' < 60; x++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		}
	}
}
