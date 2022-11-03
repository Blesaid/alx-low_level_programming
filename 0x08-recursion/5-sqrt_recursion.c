#include "main.h"

int real_sqrt(int x, int i);
int _sqrt_recursion(int n);
int x;
int i;

/**
 * real_sqrt - second entry point
 * @x: integer
 * @i: iterator
 * Return: square root
 */
int real_sqrt(int x, int i)
{
	if (i >= x / 2)
	{
		return (-1);
	}
	if (i * i == x)
	{
		return (i);
	}
	return (real_sqrt(x, i + 1));
}
/**
 * _sqrt_recursion - entry point
 * real_sqrt - second entry point
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (real_sqrt(n, i));
}
