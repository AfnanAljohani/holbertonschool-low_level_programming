#include "main.h"

/**
 * free_grid - frees a 2D grid created by alloc_grid
 * @grid: the 2D array to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
