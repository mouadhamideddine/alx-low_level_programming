#include "main.h"
/**
 * print_line - print lines _
 * description : above
 * @n : number of times to write _
 * Return: None 
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
