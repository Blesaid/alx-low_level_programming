#include "main.h"

/**
 * _islower - entey point
 * @c: checked
 *
 * Return: 1 is true, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
