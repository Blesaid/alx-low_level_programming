#include "main.h"
/**
 * swap_int - entry point
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
