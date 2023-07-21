#include "main.h"
/**
 * print_square - does what it says
 * description : look above
 * @size : size of the square
 * Return: None
 */
void print_square(int size)
{
	int lines;
	int hashes;
	
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (lines = 0 ; lines < size; lines++)
	{
		for (hashes = 0; hashes < size; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
