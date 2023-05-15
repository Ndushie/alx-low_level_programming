#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: The width of the grid.
 *
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			/* Free previously allocated memory */
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}

		/* Initialize elements to 0 */
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}

	return (grid);
}
