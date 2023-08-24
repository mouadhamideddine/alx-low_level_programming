#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - returns the index of the first element for
 * which the cmp function does not return 0
 * @array: of ints
 * @size : of the array
 * @cmp : function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (; count < size; count ++)
	{
		if (cmp(array[count]))
		{
			return (count);
		}
	}
	return (-1);
}
