#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - entry point
 * @x: number input
 * Return: 0
 */
void print_to_98(int x)
{
	if (x < 98)
	{
		while (x <= 98)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
			x++;
		}
	}
	else if (x > 98)
	{
		while (x >= 98)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
