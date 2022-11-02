#include "main.h"

int is_prime_number(int n);
int real_prime(int n, int i);

/**
 * is_prime_number - entry point
 * @n: integer
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime(n, n - 1));
}

/**
 * real_prime - entry point
 * @n: integer
 * @i: iterator
 * Return: prime
 */
int real_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (real_prime(n, i - 1));
}
