#include "main.h"
/**
 * jack_bauer - entry point
 * h: hour,
 * @m: minute
 * Return: 24hours
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
	}
}
