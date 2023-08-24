#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - prints each element in @array
 * @array : array of ints
 * @size : of the array
 * @action : pointer to a func
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0;

	for (; count < size ; count++)
	{
		action(array[count]);
	}
}
