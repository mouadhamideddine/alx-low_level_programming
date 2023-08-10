#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the grid created by alloc_grid
 * @grid : grid name
 * @height : grid height
 * Return: always none
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

