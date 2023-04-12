#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid - frees a 2D array memory
 *@grid: array created
 *@height: height of array
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
