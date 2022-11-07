#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this frees a 2d grid
 * @grid: the grid
 * @height: the height
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && HEIGHT != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
