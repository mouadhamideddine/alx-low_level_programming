#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb : number of elements
 * @size : size of each element
 * Return: Pointer to the allocated or NULL (failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *result;
	int count;
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	result = malloc(nmemb * size);
	if (result == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < nmemb; count++)
	{
		result[count] = 0;
	}
	return (result);
}
