#include "main.h"
/**times_table - function
 *
 * description : 9times table
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int second;
	int result;
	int first_digit;
	int second_digit;

	for (second = 0; second < 10; second++)
	{
		result = 9*second;
		if (result > 9)
		{
			first_digit = result / 10;
			second_digit = result % 10;
			_putchar(first_digit + '0');
			_putchar(second_digit + '0');
		}
		else if (result < 9)
		{
		_putchar(result + '0');
		}
		if (result == 81)
		{
			break;
		}
		else
		{
		_putchar(',');
		_putchar(' ');
		}
	}
}
