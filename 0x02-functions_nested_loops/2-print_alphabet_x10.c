#include "main.h"
/**
 * print_alphabet_x10 - entry point
 */

void print_alphabet_x10(void)
{
	int count = 0;
	int n;

	while (count++ <= 9)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
