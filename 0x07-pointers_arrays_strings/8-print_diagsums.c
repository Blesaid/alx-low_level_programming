#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: intergers
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += *(a + (size * x + x));
		sum2 += *(a + (size * x + size - 1 - x));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
