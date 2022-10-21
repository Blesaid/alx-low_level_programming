#include "main.h"
/**
 * largest_number - entry point
 * @a: first input
 * @b: second input
 * @c: third input
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int x;

	if (a >= b && a >= c)
	{
		x = a;
	}
	else if (b >= a && b >= c)
	{
		l = b;
	}
	else
	{
		l = c;
	}

	return (l);
}
