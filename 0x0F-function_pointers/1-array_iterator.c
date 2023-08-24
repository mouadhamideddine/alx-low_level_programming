#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each element in @array
 * @array : array of ints
 * @size : of the array
 * @action : pointer to a func
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

