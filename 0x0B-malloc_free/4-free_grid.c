#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - occupies memory with a known value
*@grid:array of numbers
* @height:size of grid
* Return:pointer
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
