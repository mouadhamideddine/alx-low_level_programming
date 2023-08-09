#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size : size of the array
 * @c : characters in the array
 * Return: Pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int count = 0;

	if (array == NULL)
	{
		return (NULL);
	}

	for (; count < size; count++)
	{
		array[count] = c;
	}
	return (array);
}
