#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array/grid width
 * @height: array/grid height
 * Each element of the grid should be initialized to 0
 * Return: the grid pointer on success, NULL on failure or if width/height <= 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(**grid) * width);

			if (grid[i] == 0)
			{
				while (i--)
				{
					free(grid[i]);
				}

				free(grid);
				return (NULL);
			}

			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}

		}
	}

	return (grid);
}
