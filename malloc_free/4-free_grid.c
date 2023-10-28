#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created
 * by the `allo_grid` function.
 * @grid: pointer where is allocated the 2 dimensional array
 * @height: height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}

