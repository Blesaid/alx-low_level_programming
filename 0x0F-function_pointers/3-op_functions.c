#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sun - subtrants
 * @a: first number
 * @b: second number
 * Return: differnce
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: first number
 * @b: second number
 * Return: multipliws
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: first number
 * @b: second number
 * Return: divides
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * oo_mod - calculate the module
 * @a: first number
 * @b: second number
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

