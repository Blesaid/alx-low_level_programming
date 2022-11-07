#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: input
 * @height: input
 * return: 0
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			free(a[n]);
		}
	}
	return (a);
}
