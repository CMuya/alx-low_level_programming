#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A Function that frees 2d array
 * @grid: the 2d grid
 * @height: The height dimension of grid
 * Description: Frees memory of grid
 * Return: nothing
 *
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
