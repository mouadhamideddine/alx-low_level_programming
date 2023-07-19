#include "main.h"
/**
 * print_to_98 - function
 *
 *description : prints from n to 98
 *
 * @n : input number
 *
 *Return : Always None (success)
 */
void print_to_98(int n)
{
	int first_digit;
	int second_digit;
	int third_digit;

	if (n>98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				first_digit = n / 10;
				second_digit = n % 10;
				_putchar(first_digit + '0');
				_putchar(second_digit + '0');
				_putchar('\n');
				break;
			}
			if (n>99)
			{
				first_digit = n / 100;
				second_digit = ((n / 10) % 10);
				third_digit = n % 10;
				_putchar(first_digit + '0');
				_putchar(second_digit + '0');
				_putchar(third_digit + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n <= 99)
			{
				first_digit = n / 10;
				second_digit = n % 10;
				_putchar(first_digit + '0');
				_putchar(second_digit + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n<98)
	{
		for (; n <= 98; n++)
		{
			if (n ==98)
			{
				first_digit = n / 10;
				second_digit = n % 10;
				_putchar(first_digit + '0');
				_putchar(second_digit + '0');
				_putchar('\n');
				break;
			}
			else if (n < 98 && n >= 10 )
			{
				first_digit = n / 10;
				second_digit = n % 10;
				_putchar(first_digit + '0');
				_putchar(second_digit + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ( n < 10)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
	{
		_putchar((n /10) + '0' );
		_putchar((n % 10) + '0' );
		_putchar('\n');
	}
}
