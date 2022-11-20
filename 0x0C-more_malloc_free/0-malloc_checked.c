#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - entry point
 * @b: number of bytes
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
