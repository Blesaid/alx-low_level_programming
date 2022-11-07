#include "main.h"
/**
 * free_grid - entry point
 * @grid: array
 * @height: size
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
