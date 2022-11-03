#include "main.h"
/**
 * factorial - entey point
 * @n: integer
 * Return: -1 as error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * !(n - 1));
	}
	return (n);
}
