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
	int **grid;
	int count = 0;
	int count_2 = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc (height * sizeof(int*));
	if (grid == NULL)
	{
		return(NULL);
	}
	for(; count < height; count++)
	{
		grid[count] = malloc (width * sizeof(int));
		if (grid[count] == NULL)
		{
			return(NULL);
		}
		for(; count_2 < width; count_2++)
		{
			grid[count][count_2] = 0;
		}
	}
}
