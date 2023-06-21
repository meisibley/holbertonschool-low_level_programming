#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of int
 * @width: the width of this grid
 * @height: the height of this grid
 * Return: a pointer for success, NULL if width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **g;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	g = malloc(sizeof(int*) * (width * height));
	if (g == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		g[h] = malloc(sizeof(int) * width);
		if (g[h] == NULL)
		{
			free(g[h]);
			return (NULL);
		}
	for (w = 0; w < width; w++)
	{
		g[h][w] = 0;
	}
	}
	return (g);
}
