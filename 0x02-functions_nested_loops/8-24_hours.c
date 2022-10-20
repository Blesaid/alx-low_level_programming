#include "main.h"
/**
 * jack_bauer - entry point
 * h = hour, x = minutes
 * Return: 24hours
 */
void jack_bauer(void)
{
	int h, x;

	for (h = 0; h < 24; h++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
		_putchar('\n');
	}
}
