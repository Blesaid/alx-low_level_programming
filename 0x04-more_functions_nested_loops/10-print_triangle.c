#include "main.h"
#include <stdio.h>
/**
 * print_triangle - entry point
 * @size: checked
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= (size - x))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
