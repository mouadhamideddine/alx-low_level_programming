#include "main.h"
/**
 * print_diagonal - as the name suggests
 *description : look above
 *@n : n is the number of times the character \ should be printed
 *Return: None
 */
void print_diagonal(int n)
{
	int count;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (count = 0; count < n; count++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			return;
		}
		else
		{
			if (count == 0)
			{
				_putchar('\\');
			}
			else
			{
				for (spaces = 0; spaces < count; spaces++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
