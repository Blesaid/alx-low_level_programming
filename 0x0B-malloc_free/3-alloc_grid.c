#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: input
 * @height: input
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);

			for (n = 0; n <= i; n++)
				free(a[n]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		{
			a[i][n] = 0;
		}
	}
	return (a);
}
