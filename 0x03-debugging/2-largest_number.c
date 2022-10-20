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
	int largest;

	if (a > c)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b > c)
			largest = c;
		else
			largeat = b;
	}
}

