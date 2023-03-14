#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include "3-alloc_grid.c"

/**
 * free_grid - frees 2 dimention grid
 * @grid: the given grid
 * @height: its height
 */

void free_grid(int **grid, int height)
{
	if (height <= 0)
		return;
	if (grid == NULL)
		return;
	free(grid);
}
