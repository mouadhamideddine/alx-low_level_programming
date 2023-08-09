#include "main.h"
#include "stdlib.h"
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width : how many rows
 * @height : how many columns
 * Return: Pointer to a pointer to the newly created array
 */
int **alloc_grid(int width, int height)
{
	int *grid;
	int *p_to_grid;
	int **p_to_p_grid;
	int total = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc ((width * height) * sizeof(int));
	if (grid == NULL)
	{
		return(NULL);
	}
	total = width + height;
	p_to_grid = &grid[0];
	for (; total > 0; total--)
	{
		*p_to_grid = 0;
		p_to_grid++;
	}
	p_to_p_grid = &grid;
	return ( p_to_p_grid);
}
