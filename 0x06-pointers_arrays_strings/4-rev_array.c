#include "main.h"
/**
 * reverse_array - reverses an array of integers
 *@a : array
 *@n : number of elements in array
 *Return: None
 */
void reverse_array(int *a, int n)
{
	int *start = &a[0];
	int *end = &a[n - 1];
	int store;
	int size = n;

	if (*a == '\0')
	{
		return;
	}
	if (size % 2 == 0)
	{
		size = size / 2;
	}
	else
	{
		size = (size - 1) / 2;
	}

	for (; size > 0; size--)
	{
		store = start;
		*start = *end;
		*end = store;
		start++;
		end--;
	}
}
