#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free up the heap
 * @height : height of array of type int
 * @grid : the grids that will be freed
 * Retun: no return
 */
void free_grid(int **grid, int height)
{
	 int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
