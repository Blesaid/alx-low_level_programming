#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - entry point
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - second entry point
 * @n: integer
 * @i: iterator
 * Return: square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == 8)
	{
		return (i);
	}
	return (real_sqrt_recursion(n, i + 1));
}

