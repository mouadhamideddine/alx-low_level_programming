#include "main.h"
/**
 * times_table - function
 *
 * description : 9times table
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int result;
	int first_digit;
	int second_digit;
	int multiplier;
	int table;

	for (table = 0; table < 10; table++)
	{
		_putchar('0');
		_putchar(',');
		for (multiplier = 1; multiplier < 10; multiplier++)
		{
			result = table * multiplier;
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result > 9)
			{
				first_digit = result / 10;
				second_digit = result % 10;
				_putchar(' ');
				_putchar(first_digit + '0');
				_putchar(second_digit + '0');
			}
			if (multiplier == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
	}
}
