#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid - frees 2d array previously created by the function
  * @grid: pointer to the 2D grid
  * @height: height of the grid
  * Return: nothing
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
