#include <stdio.h>
#include "main.h"
/**
 * print_array - entry point
 * @a: input
 * @n: input
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
