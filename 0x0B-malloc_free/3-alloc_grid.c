#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to 2d array(grid).
 * @width: is the width of grid.
 * @height: is lenght of the grid.
 *
 * Return: an integer or NULL if fails
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
