#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: input
 * @height: input
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
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a == NULL)
		{
			free(a);
			return (NULL);
		}
		
		for (n = 0; n< width; n++)
		{
			a[i][n] = 0;
		}
	}
	return (a);
}