#include"main.h"
#include<stdlib.h>

/**
 * free_grid - free the grid made by alloc_grid
 * @grid: the grid/array
 * @height: grid/array height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
