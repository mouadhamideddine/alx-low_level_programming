#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of ints
 * @min : starting value included
 * @max : maximum value included
 * Return: pointer to array or NULL if fail
 */
int *array_range(int min, int max)
{
	int *array;
	int size = 0;
	int count = 0;
	int min_c = min;

	if (min > max)
	{
		return(NULL);
	}
	size = (max - min) + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (; count < size; count++)
	{
		array[count] = min_c;
		min_c++;
	}
	return (array);
}
