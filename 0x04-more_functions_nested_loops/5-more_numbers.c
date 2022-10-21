#include "main.h"
/**
 * more_numbers - entry point
 * Return: 0
 */
void more_numbers(void)
{
	int x, count;

	for (count = 0; count <= 10; count++)
	{
		for (x >= 0; x <= 14; x++)
		{
			if (x > 9)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}




}
