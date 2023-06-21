#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 demensional grid
 * @grid: a given grid
 * @height: this grid's height
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int h;

	if (height <= 0 || grid == NULL)
	{
		return;
	}

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
