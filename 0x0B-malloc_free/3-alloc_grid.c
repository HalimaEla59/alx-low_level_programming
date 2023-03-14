#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to a 2 dimention int grid
 * @width: grid width
 * @height: grid height
 * Return: if input <= 0 or fail NULL, result otherwise
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; i++)
			{
				free(grid[i]);
			}
			free(grid);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
