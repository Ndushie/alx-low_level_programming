#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2 dimemsional grid previously created by alloc_grid.
 *
 * @grid: The grid to be freed.
 *
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
