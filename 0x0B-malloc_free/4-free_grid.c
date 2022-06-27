#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid previously created by
* the alloc_grid function
* @grid: array to be freed
* @height: height of array
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
