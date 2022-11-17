#include "function_pointers.h"
/**
 * array_iterator - entry point
 * @array: input array
 * @size: size of array
 * @action: pointer
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
