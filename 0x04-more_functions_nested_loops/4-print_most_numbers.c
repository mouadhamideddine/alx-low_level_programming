#include "main.h"
/**
 * print_most_numbers - except 2 and 4
 * description : look above
 * Return: None
 */
void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if (count == 2 || count == 4)
		{
			;
		}
		else
		{
			_putchar(count + '0');
		}
	}
	_putchar('\n');
}
