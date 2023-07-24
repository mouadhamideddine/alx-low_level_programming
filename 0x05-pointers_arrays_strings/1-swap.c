#include "main.h"
/**
 * swap_int - swaps the values of two integers using pointers
 * description : above
 * @a : input to be swapped
 * @b : same
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int first = *a;
	int second = *b;

	*a = second;
	*b = first;
}
