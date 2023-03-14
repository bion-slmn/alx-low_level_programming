#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory of 2d array(grid)
 * @height: are the rows or length of array
 * @grid: is the 2d array.
 *
 * Return: nothing
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
